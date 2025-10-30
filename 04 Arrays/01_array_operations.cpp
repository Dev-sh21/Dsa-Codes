#include <iostream>
using namespace std;

class ArrayOperations {
private:
    int arr[100];  // large enough capacity
    int size;      // current number of elements
    int capacity;  // maximum capacity of the array

public:
    // Constructor to initialize capacity and size
    ArrayOperations(int cap) {
        capacity = cap;
        size = 0;
    }

    // Method to insert element x at position pos (1-based index)
    bool insert(int x, int pos) {
        if (size == capacity) {
            return false; // Array is full
        }

        int idx = pos - 1;
        for (int i = size - 1; i >= idx; i--) {
            arr[i + 1] = arr[i];
        }
        arr[idx] = x;
        size++;
        return true;
    }

    // Method to search element x and return its index, -1 if not found
    int search(int x) {
        for (int i = 0; i < size; i++) {
            if (arr[i] == x) {
                return i;
            }
        }
        return -1;
    }

    // Method to display array elements
    void display() {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // Method to initialize array with given elements (optional)
    void initialize(int elements[], int n) {
        if (n > capacity) n = capacity;
        for (int i = 0; i < n; i++) {
            arr[i] = elements[i];
        }
        size = n;
    }
};

int main() {
    int initialArr[] = {5, 10, 20};
    int cap = 5;

    ArrayOperations arrayObj(cap);
    arrayObj.initialize(initialArr, 3);

    cout << "Before Insertion" << endl;
    arrayObj.display();

    int x = 7, pos = 2;
    if (arrayObj.insert(x, pos)) {
        cout << "After Insertion" << endl;
        arrayObj.display();
    } else {
        cout << "Insertion failed: array full" << endl;
    }

    int searchVal = 5;
    int index = arrayObj.search(searchVal);
    cout << "Element " << searchVal << " found at index: " << index << endl;

    return 0;
}

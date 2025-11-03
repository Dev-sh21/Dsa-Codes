#include <iostream>
#include <vector>
using namespace std;

void leftRotateByD(int arr[], int n, int d) {
    vector<int> temp(d);
    
    // Step 1: store first d elements
    for (int i = 0; i < d; i++)
        temp[i] = arr[i];
    
    // Step 2: move remaining elements to front
    for (int i = d; i < n; i++)
        arr[i - d] = arr[i];
    
    // Step 3: put temp elements at end
    for (int i = 0; i < d; i++)
        arr[n - d + i] = temp[i];
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5, d = 2;
    
    leftRotateByD(arr, n, d);
    
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
// time :theta(n)
#include <iostream>
using namespace std;

int firstOccurance(int arr[], int low, int high, int x) {
    if (low > high)
        return -1;

    int mid = (low + high) / 2;

    if (x < arr[mid])
        return firstOccurance(arr, low, mid - 1, x);
    else if (x > arr[mid])
        return firstOccurance(arr, mid + 1, high, x);
    else {
        if (mid == 0 || arr[mid - 1] != arr[mid])
            return mid;
        else
            return firstOccurance(arr, low, mid - 1, x);
    }
}

int main() {
    int arr[] = {2, 2, 3, 4, 5, 5, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 6;
    cout << firstOccurance(arr, 0, n - 1, x);
}
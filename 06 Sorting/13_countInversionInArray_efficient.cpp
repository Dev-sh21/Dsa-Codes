#include <iostream>
using namespace std;

int countAndMerge(int a[], int l, int mid, int r) {
    int n1 = mid - l + 1;
    int n2 = r - mid;

    int left[n1], right[n2];

    for (int i = 0; i < n1; i++)
        left[i] = a[l + i];

    for (int j = 0; j < n2; j++)
        right[j] = a[mid + 1 + j];

    int i = 0, j = 0, k = l;
    int res = 0;

    while (i < n1 && j < n2) {
        if (left[i] <= right[j]) {
            a[k++] = left[i++];
        } else {
            a[k++] = right[j++];
            res += (n1 - i);   
        }
    }

    while (i < n1) a[k++] = left[i++];
    while (j < n2) a[k++] = right[j++];

    return res;
}

int countInversion(int a[], int l, int r) {
    int res = 0;
    if (l < r) {
        int mid = (l + r) / 2;

        res += countInversion(a, l, mid);       
        res += countInversion(a, mid + 1, r);
        res += countAndMerge(a, l, mid, r);
    }
    return res;
}

int main() {
    int a[] = {2, 4, 1, 3, 5};
    int n = sizeof(a) / sizeof(a[0]);

    cout << countInversion(a, 0, n - 1);
    return 0;
}
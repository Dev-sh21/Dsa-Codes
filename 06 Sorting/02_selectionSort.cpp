#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int>& a, int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < n; j++) {  // FIXED condition
            if (a[j] < a[min_index]) {
                min_index = j;
            }
        }
        swap(a[i], a[min_index]);
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> a(n); // allocate size
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    selectionSort(a, n);

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
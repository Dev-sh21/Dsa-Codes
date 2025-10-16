//the condition given is that we will have only 1 number which will 
// be occuring odd number of times.

#include <iostream>
#include <vector>
using namespace std;

int findOdd(const vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) count++;
        }
        if (count % 2 != 0) return arr[i];
    }
    return -1;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    cout << findOdd(arr);
}

// time complexity: O(n^2) just imagine the case [7 7 7 7 3]
// in this case we will have to traverse till last.
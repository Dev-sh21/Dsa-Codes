#include <iostream>
#include <stack>
using namespace std;

void nextGreatest(int arr[], int n)
{
    stack<int> s;
    int* res = new int[n];

    // The last element has no next greater
    res[n - 1] = -1;
    s.push(arr[n - 1]);

    // Traverse from right to left
    for(int i = n - 2; i >= 0; i--)
    {
        while(!s.empty() && s.top() <= arr[i])
            s.pop();

        res[i] = s.empty() ? -1 : s.top();
        s.push(arr[i]);
    }

    // Print result
    for(int i = 0; i < n; i++)
    {
        cout << res[i] << " ";
    }
    cout << endl;

    delete[] res;
}

int main()
{
    int n;
    cout << "Enter the number of elements:\n";
    cin >> n;

    int *arr = new int[n];
    cout << "Enter " << n << " elements:\n";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    nextGreatest(arr, n);

    delete[] arr;
    return 0;
}
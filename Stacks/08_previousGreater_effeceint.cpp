#include <iostream>
#include <stack>
using namespace std;

void previousGreatest(int arr[], int n)
{
    stack<int> s;

    for(int i = 0; i < n; i++)
    {
        // Remove elements smaller than or equal to current
        while(!s.empty() && s.top() <= arr[i])
            s.pop();

        int pg = s.empty() ? -1 : s.top();
        cout << pg << " ";

        s.push(arr[i]);  // Push current element
    }
    cout << endl;
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

    previousGreatest(arr, n);

    delete[] arr;
    return 0;
}
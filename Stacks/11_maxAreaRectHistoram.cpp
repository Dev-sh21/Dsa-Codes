#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;

int getMaxArea(int arr[],int n)

{
  int res=0;
  stack<int>s;
  for(int i=0;i<n;i++)
  {
    while(!s.empty()&&arr[s.top()]>=arr[i])
    {
      int tp=s.top();
      s.pop();
      int curr=arr[tp]*(s.empty()?i:(i-s.top()-1));
      res=max(res,curr);
    }
    s.push(i);

  }
  while(!s.empty())
  {
    int tp=s.top();
    s.pop();
    int curr=arr[tp]*(s.empty()?n:(n-s.top()-1));
    res=max(res,curr);
  }
  return res;


}
int main()
{
   int arr[] = {6, 2, 5, 4, 5, 1, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Largest Rectangular Area: " << getMaxArea(arr, n) << endl;
    return 0;

}
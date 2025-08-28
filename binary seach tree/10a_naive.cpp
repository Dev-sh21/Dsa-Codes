#include <iostream>
using namespace std;
void leftCeil(int arr[], int n)
{
  cout<<"-1"<<" ";
  int diff=INT_MAX;
  for(int i=1;i<n;i++)
  {
    for(int j=0;j<i;j++)
    {
      if(arr[j]>arr[i])
      diff=min(diff,arr[j]-arr[i]);

    }
    if(diff==INT_MAX)
    cout<<"-1"<<" ";
    else
    cout<<(arr[i]+diff)<<" ";
  }
}

int main()
{
  int arr[]={2,8,30,15,25,12};
  int n=sizeof(arr)/sizeof(arr[0]);
  leftCeil(arr,n);
  return 0;


}
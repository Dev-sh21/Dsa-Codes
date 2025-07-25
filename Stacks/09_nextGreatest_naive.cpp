#include<iostream>
using namespace std;
void nextGreatest(int arr[],int n)
{
  for(int i=0;i<n;i++)
  {
    int j;
    for( j=i+1;j<n;j++)
    {
      if(arr[j]>arr[i])
      {
        cout<<arr[j]<<" ";
        break;
      }
    }
    if(j==n)
    {
      cout<<"-1"<<" ";
    }
  }
}
int main()
{
  int n;
  cout<<"enter the number of element\n";
  cin>>n;

  int *arr=new int[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  nextGreatest(arr,n);
  return 0;

}
#include<iostream>
using namespace std;
void printStack(int arr[],int n)
{
  stack<int> s;
  s.push(0);
  cout<<"1"<<" ";
  for(int i=1;i<n;i++)
  {
    while(s.empty()==false && arr[s.top()]<=arr[i])
    {
      s.pop();
    }
    int span=s.empty()?i+1:i-s.top();
    cout<<span<<" ";
    s.push(i);
  }

}
int main()
{
  int n;
  cout<<"enter the number of elements";
  cin>>n;
  int *arr=new int[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  printStack(arr,n);
  return 0;


}
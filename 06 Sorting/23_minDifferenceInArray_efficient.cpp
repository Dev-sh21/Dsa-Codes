#include<iostream>
using namespace std;
int getMinDiff(int arr[], int n){
  int res=INT_MAX;
  sort(arr, arr+n);
  for(int i=1;i<n;i++){
    res=min(res,arr[i]-arr[i-1]);
  }
  return res;
}
int main(){
  int arr[]={3,2,6,8,1,5};
  int n=sizeof(arr)/sizeof(arr[0]);
  cout<<getMinDiff(arr,n);
  return 0;
}
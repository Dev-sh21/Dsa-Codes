#include<iostream>
using namespace std;
int maxDiff(int arr[], int n){
  int res=arr[1]-arr[0];
  int minDiff=arr[0];
 for(int j=1;j<n;j++){
  res=max(res,arr[j]-minDiff);
  minDiff=min(minDiff,arr[j]);
 }
 return res;
}
int main(){
  int arr[]={2,4,6,7,342,5};
  int n=sizeof(arr)/sizeof(arr[0]);
  cout<<"the maximum difference is "<<maxDiff(arr,n)<<" ";
}
// time: O(n)
//space: O(1)
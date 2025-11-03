#include<iostream>
using namespace std;
int maxDifference(int arr[], int n){
  int res=arr[1]-arr[0];
  for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
      res=max(res,arr[i]-arr[j]);
    }

  }
  return res;
  
}
int main(){
  int arr[]={3,5,7,3,2,5,7,1};
  int n=sizeof(arr)/sizeof(arr[0]);
  cout<<maxDifference(arr,n);
}// time: theta(n^2)
//space theta(1)
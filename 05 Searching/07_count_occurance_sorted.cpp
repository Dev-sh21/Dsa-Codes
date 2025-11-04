#include<iostream>
using namespace std;
int firstOccurance(int arr[], int n, int x){
  int low=0, high=n-1;
  
  while(low<=high){
    int mid=(high+low)/2;
    if(x<arr[mid]) high=mid-1;
    else if (x>arr[mid])  low=mid+1;
    else
    {
      if(mid==0 || arr[mid-1]!=arr[mid]) return mid;
      else high=mid-1;
    }

  }
  return -1;
}
int lastOccurance(int arr[], int n, int x){
  int low=0, high=n-1;
  while(low<=high){
    int mid=(high+low)/2;
    if(x<arr[mid]) high=mid-1;
    else if(x>arr[mid]) low=mid+1;
    else{
      if(mid==n-1|| arr[mid+1]!=arr[mid]) return mid;
      else low=mid+1;
    }
  }
  return -1;
}
int countOccurance(int arr[], int n, int x){
  int first_index=firstOccurance(arr,n,x);
  if(first_index==-1) return 0;
  else return lastOccurance(arr,n,x)-first_index+1;
}
int main(){
  int arr[]={1,2,2,2,3,3,3,3,4,4,4,5,5,6};
  int n=sizeof(arr)/sizeof(arr[0]);
  int x=2;
  cout<<countOccurance(arr,n,x);
  return 0;
}
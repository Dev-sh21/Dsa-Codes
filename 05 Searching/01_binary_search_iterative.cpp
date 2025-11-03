#include<iostream>
using namespace std;
int binarySearch(int arr[],int n,int x){
  int low=0,high=n-1;
  while(low<high){
    int mid=(high+low)/2;
    for(int i=0;i<n;i++){
      if(arr[mid]==x) return mid;
      else if(arr[mid]>x){
        high=mid-1;
      }
      else low=mid+1;
    }
  }
  return -1;
}
int main(){
  int arr[]={2,4,7,8,9,10};
  int n=6;
  int x=7;
  cout<<"the element is at index "<<binarySearch(arr,n,x);

}
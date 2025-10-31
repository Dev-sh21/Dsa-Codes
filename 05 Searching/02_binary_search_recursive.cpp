#include<iostream>
using namespace std;
int binarySearch(int arr[],int low,int high,int x){

  if(low>high) return -1;
  int mid=(high+low)/2;
  if(arr[mid]==x) return mid;
  else if(arr[mid]>x)
   return binarySearch(arr,low,mid-1,x);
  else
   return binarySearch(arr,mid+1,high,x);

   
}

int main(){
  int arr[]={1,2,4,5,6,7,8,9};
  int n=8;
  int x=7;
  cout<<"the element is at index "<<binarySearch(arr,0,n-1,x);
  return 0;
}
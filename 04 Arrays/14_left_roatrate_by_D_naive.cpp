#include<iostream>
using namespace std;
void leftRotateByOne(int arr[], int n){
  int temp=arr[0];
  for(int i=1;i<n;i++){
    arr[i-1]=arr[i];
  }
  arr[n-1]=temp;
}
void leftRotatedByD(int arr[],int n,int d){
  for(int i=0;i<d;i++){
    leftRotateByOne(arr,n);
  }
}
 int main(){
  int arr[]={2,4,6,7,4,2};
  int n=6;
  int d=2;
  leftRotatedByD(arr,n,d);
  cout<<"the rotated array is "<<endl;
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  } 

 }
 //time: theta(nd) 
 //space: theta(1)
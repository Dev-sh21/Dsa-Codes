#include<iostream>
using namespace std;
int largestElement(int arr[], int n){
  int res=0;
  for(int i=0;i<n;i++){
    if(arr[i]>arr[res]) res=i;
  }
  return res;

}
int main(){
  int arr[]={3,5,2,7,4,1,9};
  int n=7;
  cout<<"the largest element in the array is "<< arr[largestElement(arr,7)]<<endl;

}

#include<iostream>
using namespace std;
int largestElement(int arr[], int n){
  for(int i=0;i<n;i++){
    bool flag=true;
    for(int j=0;j<n;j++){
      if(arr[j]>arr[i]){
        flag=false;
        break;
      }  
    }
    if(flag==true) return i;
  }
  return -1;
}
int main(){
  int arr[]={3,5,2,7,4,1,9};
  int n=7;
  cout<<"the largest element in the array is at index "<< largestElement(arr,7)<<endl;

}

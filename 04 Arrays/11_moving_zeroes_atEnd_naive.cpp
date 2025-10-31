#include<iostream>
using namespace std;
void zerosAtEnd(int arr[],int n){
  for(int i=0;i<n;i++){
    if(arr[i]==0){
      for(int j=i+1;j<n;j++){
        if(arr[j]!=0) swap(arr[i],arr[j]);
      }
    }
  }
}
int main(){
  int arr[]={2,0,3,1,0,6,1,0};
  int n=8;
  zerosAtEnd(arr,n);
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  } 
}
// time: O(n^2)
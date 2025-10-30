#include<iostream>
using namespace std;
int largestFunction(int arr[], int n){
  int largest=0;
  for(int i=0;i<n;i++){
    if(arr[largest]<arr[i]) largest=i;
  }
  return largest;
}
int secondLargest(int arr[], int n){
  int largest=largestFunction(arr,n);
  int res=-1;
  for(int i=0;i<n;i++){
    if(arr[i]!=arr[largest]){
      if(res==-1) res=i;
      else if (arr[i]>arr[res]) res=i;
    }
  }
  return res;

}
int main(){
  int arr[]={4,3,67,78,3,5};
  int n=6;
  cout<<"the second largest element in the array is "<<arr[secondLargest(arr,6)];
}
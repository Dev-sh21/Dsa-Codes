#include<iostream>
using namespace std;
int secondLargestFunction(int arr[], int n){
  int res=-1,largest=0;
  for(int i=1;i<n;i++){
    if(arr[i]>arr[largest]){
      res=largest;
      largest=i;
    }
    else if(arr[i]!=arr[largest]){
      if(res==-1 || arr[i]>arr[res]) res=i;

    }
  }
  return res;

}
int main(){
  int arr[]={4,3,67,78,3,5};
  int n=6;
  cout<<"the second largest element in the array is "<<arr[secondLargestFunction(arr,6)];
}
//time :theta(n)
//space: theta(1)
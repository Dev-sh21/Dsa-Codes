#include<iostream>
using namespace std;
int reversedArray(int arr[],int n)
{
  int low=0, high=n-1;
  while(low<high){
    int temp=arr[low];
    arr[low]=arr[high];
    arr[high]=temp;
    low++;
    high--;
  }
  return 0;

}

int main(){
  int arr[]={4,6,7,3,2};
  int n=5;
  reversedArray(arr,n);
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }


}
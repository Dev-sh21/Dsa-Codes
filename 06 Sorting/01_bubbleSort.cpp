#include<iostream>
using namespace std;
void bubbleSort(int arr[], int n){
  for(int i=0;i<n-1;i++){
    for(int j=0;j<n;j++){
      if(arr[j]>arr[j+1]) swap(arr[j],arr[j+1]);

    }
  }
}
int main(){
  int a[]={3,5,7,8,2};
  bubbleSort(a,5);
  for(int i=0;i<5;i++){
    cout<<a[i]<<" ";
  }
  return 0;


}
#include <iostream>
#include <algorithm>
using namespace std;
void rotate(int arr[], int low, int high){
  while(low<high){
    swap(arr[low], arr[high]);
    low++;
    high--;
  }
}
void leftRoatateArray(int arr[], int n, int d){
  rotate(arr,0,d-1); //O(d)
  rotate(arr,d,n-1); //O(n-d)
  rotate(arr,0,n-1); //O(n)
}
int main(){
  int arr[]={1,2,3,4,5};
  int n=5;
  int d=2;
  leftRoatateArray(arr,n,d);
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }

}
// time O(n)
// space O(1);
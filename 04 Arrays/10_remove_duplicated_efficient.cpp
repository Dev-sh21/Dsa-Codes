#include<iostream>
using namespace std;
int removeDuplicate(int arr[], int n){
  int res=1;
  for(int i=1;i<n;i++){
    if(arr[res-1]!=arr[i]){
      arr[res]=arr[i];
      res++;
    }
  }
  return res;
}
int main(){
  int arr[]={2,4,4,5,6,6,6,7,7};
  int n=8;
  n=removeDuplicate(arr,n);
  cout<<"after removall"<<endl;
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }

}
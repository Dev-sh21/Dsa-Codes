#include<iostream>
using namespace std;
void moveZeroesEnd(int arr[],int n){
  int count=0;
  for(int i=0;i<n;i++){
    if(arr[i]!=0){
      swap(arr[i],arr[count]);
      count++;
    }
  }

  cout<<"the number of zeroes at the end are " <<n-count<<endl;
}
int main(){
  int arr[]={1,0,2,0,4,0,2,7};
  int n=8;
  moveZeroesEnd(arr,n);
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";

  }

}//time :O(n)
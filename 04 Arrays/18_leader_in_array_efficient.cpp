#include<iostream>
using namespace std;
void leaderInArray(int arr[], int n){
  int current_leader=arr[n-1];
  cout<<current_leader<<" "; 
  for(int i=n-2;i>=0;i--){
    if(current_leader<arr[i]){
      current_leader=arr[i];
      cout<<arr[i]<<" ";
    }
  }


}
int main(){
  int arr[]={4,6,8,3,1,5,8,2};
  int n=sizeof(arr)/sizeof(arr[0]);
  leaderInArray(arr,n);

}
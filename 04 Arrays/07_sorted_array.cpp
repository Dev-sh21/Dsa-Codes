#include <iostream>
using namespace std;
bool isSorted(int arr[],int n){
  for(int i=1;i<n;i++){
    if(arr[i]<arr[i-1]) return false;
  }
  return true;
}
int main(){
  int arr[]={4,6,3,7,1};
  int n=5;
  cout<<((isSorted(arr,n))?"true":"false");


}
#include<iostream>
using namespace std;
int deleteElement(int arr[], int n, int x){
  int i;
  for(i=0;i<n;i++){
    if(arr[i]==x) break;
  }
    if(i==n) return n;// if the element we are searching is not present
    for(int j=i;j<n-1;j++){ //if the element is present then it will return 1 position less
      arr[j]=arr[j+1];
    }
    return n-1;
  }

int main(){
  int arr[]={2,4,6,7,3};
  int x=6, n=5;
  cout<<"before deletion"<<endl;
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  n=deleteElement(arr,n,x);
  cout<<"after deletion"<<endl;

  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }

}
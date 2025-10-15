#include<iostream>
using namespace std;
int countSetBits(int n){
  int res=0;
  while(n>0){
    if(n%2==1){
      res++;
    }
    n=n/2;

  }
  return res;

}
int main(){
  int n;
  cin>>n;
  cout<< countSetBits(n);

}
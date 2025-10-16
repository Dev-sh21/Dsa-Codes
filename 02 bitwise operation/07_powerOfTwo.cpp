// this is neive approach 

#include<iostream>
using namespace std;
bool powerOfTwo(int n){
  if(n==0)  return false;
  while(n!=1){
    if(n%2!=0) return false;
    n=n/2;
  }
  return true;

}
int main(){
  int n;
  cin>>n;
  cout<<powerOfTwo(n)<<endl; 
}
//time complexity: O(logn)
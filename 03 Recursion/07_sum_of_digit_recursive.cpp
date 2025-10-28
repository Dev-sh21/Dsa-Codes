#include <iostream>
using namespace std;
int getSum(int n){
  if(n<10) return n;
  return getSum(n/10)+n%10;
}

int main(){
  cout<<getSum(5654);
  return 0;
}
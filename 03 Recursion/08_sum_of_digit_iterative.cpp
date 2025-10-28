#include <iostream>
using namespace std;
int getSum(int n){
  int res=0;
  while(n>=0){
    res=res+n%10;
    n=n/10;
  }
  return res;
}

int main(){
  cout<<getSum(5654);
}
// time theta(d) where d is the number of digits
// space theta(1)
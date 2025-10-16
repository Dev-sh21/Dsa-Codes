#include<iostream>
using namespace std;
int main(){
  int n;
  cin >> n;
  int res = 0;
  while(n > 0) {
    n = n & (n-1);
    res = res + 1;
  }
  cout << res;
  return 0;
}
// time: theta(set bits)
// this algorithm is called brian kerningam's algorithm
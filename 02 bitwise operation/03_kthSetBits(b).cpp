#include<iostream>
using namespace std;
int setBit(int n, int k){
  int res=0;
  while(n>0)
  {
    n=n&(n-1);
    res=res+1;
  }
  return res;
}
int main()
{
  int n,k;
  cin>>n>>k;
  setBit(n,k);


}
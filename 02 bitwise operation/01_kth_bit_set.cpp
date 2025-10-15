#include<iostream>
using namespace std;
void setBit(int n, int k){
  int x=(n>>(k-1));
  if((x&1)!=0)
  cout<<"yes";
  else
  cout<<"No";
}
int main()
{
  int n,k;
  cin>>n>>k;
  setBit(n,k);


}
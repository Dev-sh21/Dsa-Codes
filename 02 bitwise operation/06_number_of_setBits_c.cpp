// in this method we make the lookup table og 256 bits 

#include<iostream>
using namespace std;
int table[256];
void initialize(){
  table[0]=0;
  for(int i=1;i<256;i++){
    table[i]=table[i&(i-1)]+1;
  }
}

int countSetBits(int n){
  return table[n&255]+
        table[(n>>8)& 255]+
        table[(n>>16)& 255]+
        table[(n>>24)& 255];
}


int main(){
  initialize();
  int n;
  cin>>n;
  cout<<countSetBits(n)<<endl;
  return 0;


}
//time complexty is O(1).
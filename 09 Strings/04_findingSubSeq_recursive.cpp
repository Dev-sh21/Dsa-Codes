#include<iostream>
using namespace std;
bool isSubSeq(string &str1, string &str2, int n, int m){
  if(m==0) return true;
  if(n==0) return false;
  if(str1[n-1]==str2[m-1]) return (str1, str2, n-1,m-1);
  else return(str1, str2, n-1, m);
  
}
int main(){
  string str1,str2;
  cout<<"enter the main stirng\n";
  cin>>str1;
  cout<<"enter the second string\n";
  cin>>str2;
  int n,m;
  n=str1.length();
  m=str2.length();
  if(isSubSeq(str1,str2, n, m)) cout<<"yes";
  else cout<<"No";
  return 0;



}
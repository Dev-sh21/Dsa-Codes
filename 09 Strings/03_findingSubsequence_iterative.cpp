#include<iostream>
using namespace std;
bool isSubSeq(string &str1, string &str2, int n, int m){
  int j=0;
  for(int i=0;i<n&& j<m;i++){
    if(str1[i]==str2[j]){
      j++;
    }
  }
  return(j==m);
  
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
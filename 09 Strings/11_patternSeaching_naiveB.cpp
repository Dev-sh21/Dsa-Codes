#include<iostream>
using namespace std;
void isPresent(string text, string pattern){
  int n=text.length();
  int m=pattern.length();

  for(int i=0;i<=n-m;){
    int j;
    for(j=0;j<m;j++){
      if(pattern[j]!=text[i+j]) break;   
    }
    if(j==m) cout<<i<<" ";
    if(j==0) i++;
    else i=i+j;
    

  }
}
int main(){
  string text="abababcd";
  string pattern="abab";
  cout<<"All index numbers where pattern found:"<<" ";
  isPresent(text,pattern);
  return 0;
}
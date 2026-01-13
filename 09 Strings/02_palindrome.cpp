#include<iostream>
using namespace std;
bool isPalindrome(string &s){
  int begin=0;
  int end=s.length()-1;
  while(begin<end){
    if(s[begin]!=s[end]){
      return false;
    }else{
      begin++;
      end--;
    }
  }
  return true;

}
int main(){
  string s;
  cout<<"enter the string\n";
  cin>>s;
  if(isPalindrome(s)){
    cout<<"it is a palindrome";
  }
  else cout<<"nah its not a plaindrome";
  return 0;

}
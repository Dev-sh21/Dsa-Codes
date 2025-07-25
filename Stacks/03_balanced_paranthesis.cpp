#include<iostream>
using namespace std;


bool matching(char a,char b)
{
  return(a=='(' && b==')')||
        (a=='{' && b=='}')||
        (a=='[' && b==']');
}



bool isBalanced(string &str)
{
  stack<char>s;
  for(char x:str)
  {
    if(x=='(' || x=='{' || x=='[')
    s.push(x);

    else
    {
      if(s.empty()==true)
      return false;
      if(matching(s.top(),x)==false)
      return false;
      s.pop();
    }
  }
  return(s.empty()==true);
}
int main()
{
  string str;
  cout<<"enter the string\n";
  cin>>str;
  if(isBalanced(str))
  cout<<"balanced\n";
  else
  cout<<"not balanced";
  return 0;


}
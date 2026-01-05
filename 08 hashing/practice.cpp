#include<iostream>
#include<set>
using namespace std;
int main(){
  set<int, greater<int>>s;
  s.insert(10);
  s.insert(20);
  if(s.count(20)) cout<< "yes\n";
  for(auto it=s.rbegin();it!=s.rend();it++){
    cout<<(*it)<<" ";
  }
}
#include<iostream>
#include<set>
using namespace std;
set<int>s;
void insert(int x){
  s.insert(x);
}
bool search(int x){
  return (s.find(x)!=s.end());
}
void deleteElement(int x){
  s.erase(x);
}
int getCeil(int x){
  auto it=s.lower_bound(x);
  if(it==s.end()) return INT_MAX;
  return *it;  
}
int getFloor(int x){
  
}

int main(){
  insert(5);
  insert(3);
  insert(20);
  insert(30);
  insert(25);

  search(30);
  deleteElement(20);

  getCeil(22);
  getFloor(22);
}
//this method is based on brian algo, which states that if a number is a power of 2, 
// then it will contain only 1 set bit and rest of all the bits will be 0
// so the approach is to just check if the number has 1 set bit or not.

#include<iostream>
using namespace std;

bool powerOfTwo(int n){
  return(n&(n+(n-1)));
}

int main(){
  int n;
  cin>>n;
  cout<<powerOfTwo(n)<<endl; 
}

//time complexity: O(1) => this is because the time for brian algorithm is O(digits)
// nd here the we will have to check for just 1 digit, so the time is O(1) in the best case
// but in the worst case it will be O(n) where n is the number of digits.
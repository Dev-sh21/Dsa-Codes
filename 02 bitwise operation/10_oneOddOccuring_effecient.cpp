// this method is based on the property of XOR that 
// 1) XOR of odd numbers is that number itself eg 4^4^4 =4
// 2) xor of even number is 0, example 4^4=0

#include<iostream>
using namespace std;
int findOdd(vector<int> &arr){
  int n=arr.size();
  int res=0;
  for(int i=0;i<n;i++){
    res=res ^ arr[i]; 
  }
  return res;
}
int main(){
  int n;
  cin>>n;
  vector<int>arr(n);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  cout<<findOdd(arr);

}

//time complexity: ϴ(n)
//space complexity: O()
#include<iostream>
using namespace std;
void printUnion(int a[],int b[], int m, int n){
  int c[m+n];
  for(int i=0;i<m;i++){
    c[i]=a[i];
  }
  for(int i=0;i<m+n;i++){
    c[i+m]=b[i];
  }
  sort(c,c+m+n);
  for(int i=0;i<m+n;i++){
    if(i==0|| c[i]!=c[i-1]) cout<<c[i]<<" ";
  }

}
int main(){
    int a[]={3,8,10};
    int b[]={2,8,9,10,15};
    int m=sizeof(a)/sizeof(a[1]);
    int n=sizeof(b)/sizeof(b[1]);
    printUnion(a,b,m,n);
}
//recursive solution

#include<iostream>
using namespace std;
struct Node{
  int key;
  Node *left;
  Node *right;
  Node(int x)
  {
    key=x;
    left=right=NULL;
  }
};

bool Search(Node *root, int x){
  if(root==NULL) return false;
  else if(root->key==x) return true;
  else if(root->key>x) return Search(root->left,x);
  else  return Search(root->right,x);
}
int main(){
  Node *root= new Node(10);
  root->left=new Node(2);
  root->right=new Node(20);
  if(Search(root,2))
  cout<<"the element is present"<<endl;
  else
  cout<<"the element is not present";
  return 0;
  

}

#include<iostream>
using namespace std;
struct Node{
  int key;
  Node *left;
  Node *right;
  Node(int k)
  {
    key=k;
    left=right=NULL;
  }
};


int isBalanced(Node *root)
{
  if(root==NULL)return 0;
  int lh=isBalanced(root->left);
  if(lh==-1) return -1;
  int rh=isBalanced(root->right);
  if(rh==-1)return -1;
  if(abs(lh-rh)>1) return -1;
  return max(lh,rh)+1; 
}
int main()
{
  Node *root=new Node(18);
  root->left=new Node(4);
  root->right=new Node(20);
  root->right->left=new Node(13);
  root->right->right=new Node(70);
  if(isBalanced(root))
  {
    cout<<"balanced"<<endl;

  }
  else
  cout<<"not balanced";
  

}
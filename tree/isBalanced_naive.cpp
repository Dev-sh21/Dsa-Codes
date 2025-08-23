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
int height(Node *root)
{
  if(root==NULL) return 0;
  else
  return (max(height(root->left),height(root->right)))+1;
}

bool isBalanced(Node *root)
{
  if(root==NULL) return true;
  int lh=height(root->left);
  int rh=height(root->right);
  return (abs(lh-rh)<=1 && isBalanced(root->left) && isBalanced(root->right));
}
int main()
{
  Node *root=new Node(18);
  root->left=new Node(4);
  root->right=new Node(20);
  root->right->left=new Node(13);
  root->right->right=new Node(70);
  cout<< isBalanced(root);
  

}
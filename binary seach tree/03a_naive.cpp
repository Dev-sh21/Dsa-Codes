//recursive 
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
Node *insert(Node *root, int x)
{
  if(root==NULL) 
  return new Node(x);
  else if(root->key>x)
  root->left=insert(root->left,x);
  else if(root->key<x)
  root->right=insert(root->right, x);
  return root;

}
void inorder(Node *root){
  if(root==NULL) return;
  inorder(root->left);
  cout<<root->key<<" ";
  inorder(root->right);
}
int main(){
  Node *root=new Node(10);
  root->left=new Node(5);
  root->right=new Node(20);
  root=insert(root,17);
  inorder(root);



}
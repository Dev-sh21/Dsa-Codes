#include<iostream>
using namespace std;
struct Node
{
  Node *left;
  Node *right;
  int key;
  Node(int x)
  {
    key=x;
    left=NULL;
    right=NULL;
  }
};
void printKth(Node *root,int k,int &count)
{
  if(root!=NULL)
  {
    printKth(root->left,k,count);
    count++;
    if(count==k)
    {
      cout<<root->key;
    }
    printKth(root->right,k,count);
  }

}

int main()
{
  Node *root=new Node(50);
  root->left=new Node(20);
  root->left->left=new Node(10);
  root->left->right=new Node(40);
  root->right=new Node(100);
  root->right->left=new Node(80);
  root->right->right=new Node(120);
  int k=3;
  int count =0;
  printKth(root,k,count);


}
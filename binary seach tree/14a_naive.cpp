#include<iostream>
#include<list>
#include<vector>
using namespace std;
struct Node{
  int key;
  Node *left;
  Node *right;
  Node(int x){
    key=x;
    left=right=NULL;
  }
};

void inorderTraversal(Node *root, vector<int> &list)
{
  if(root==NULL)
  return;
  
    inorderTraversal(root->left, list);
    list.push_back(root->key);
    inorderTraversal(root->right, list);

}
bool isSum(Node *root, int target)
{
  vector<int>a2;
  inorderTraversal(root,a2);
  int start=0;
  int end=a2.size()-1;
  while(start<end){
    if(a2[start]+a2[end]==target) {
      cout<<"value found\n";
      return true;
    }
    if(a2[start]+a2[end]>target) end--;
    if(a2[start]+a2[end]<target) start++;
  }
  cout<<"no such value found\n";
  return false;
}

int main(){
  	Node *root = new Node(10);  
    root->left = new Node(8);  
    root->right = new Node(20);  
    root->left->left = new Node(4);
    root->left->right = new Node(9);
    root->right->left = new Node(11);
    root->right->right = new Node(30);  
    root->right->right->left = new Node(25);
    int sum=33;
    isSum(root,sum);
    return 0;

}
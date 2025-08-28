#include<iostream>
using namespace std;
struct Node
{
  int key;
  Node *left,*right;
  int lcount;
  Node(int x)
  {
    key=x;
    left=right=NULL;
    lcount=0;
  }

};

Node *insert(Node *root,int x)
{
  if(root==NULL)
  return NULL;

  if(x<root->key){
  root->left= insert(root->left,x);
  root->lcount++;
}else{
  root->right=insert(root->right,x);

}
return root;

}

Node *Kthsmallest(Node *root,int k)
{
  if(root==NULL) return NULL;
  int count=root->lcount+1;
  
  if(count ==k){
    return root;
  }
  if(count>k){
    return Kthsmallest(root->left,k);
  }
  return Kthsmallest(root->right,count-k);
}

int main() {
	
	Node* root = NULL;
    int keys[] = { 20, 8, 22, 4, 12, 10, 14 };
 
    for (int x : keys)
        root = insert(root, x);
 
    int k = 4;
    Node* res = Kthsmallest(root, k);
    if (res == NULL)
        cout << "There are less than k nodes in the BST";
    else
        cout << "K-th Smallest Element is " << res->key;
    return 0;
	
}
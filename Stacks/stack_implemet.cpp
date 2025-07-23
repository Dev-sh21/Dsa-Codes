#include<iostream>
using namespace std;
struct Node
{
  int data;
  Node *next;
  Node(int d)
  {
    data=d;
    next=NULL;
  }
};

struct myStack
{
  Node *head;
  int sz;
  myStack()
  {
    head=NULL;
    sz=0;
  }
  
  void push(int x)
  {
    Node *temp=new Node(x);
    temp->next=head;
    head=temp;
    sz++;
  }

  int pop()
  {
    if(head==NULL)
    return INT_MAX;
    int res=head->data;
    Node *temp=head;
    head=head->next;
    delete(temp);
    sz--;
    return res;
  }


  int size()
  {
    return sz;
  }

  int peek()
  {
    if(head==NULL)
    {
      return INT_MAX;
    }

    return head->data;

  }



};

int main()
{
  myStack s;
  s.push(10);
  s.push(20);
  s.push(10);

  cout<<s.size()<<endl;

  s.pop();
  cout<<s.peek()<<endl;
  cout<<s.size();

  return 0;
  
}


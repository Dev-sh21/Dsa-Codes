#include<iostream>
using namespace std;
struct Queue{
  int front,rear,size;
  unsigned int capicity;
  int *array;

  Queue(int x)
  {
    capicity=x;
    front=0;
    rear=capicity-1;
    size=0;
    array=new int[capicity];
  }


  bool isFull(){
    return size==capicity;

  }

  bool isEmpty(){
    return size==0;
  }

  void enqueue(int x){
    if (isFull())
    {
      cout<<"queue is full"<<x<<endl;
    }
    rear=(rear+1)%capicity;
    array[rear]=x;
    size++;
    cout<<x <<" enqued "<<endl;
  }

  void deque()
  {
    if (isFull())
    {
      cout<<"the queue is empty\n";
    }
    int x=array[front];
    front=(front+1)%capicity;
    size--;
    cout<<x<<"dequed\n";
  }

  int getFront()
  {
    if (isEmpty())
    {
      return INT_MIN;
    }
    return array[front]; 
  }
  
  int getRear()
  {
    if(isFull())
    return INT_MIN;

    return array[rear];
  }
};
int main()
{
  Queue q(1000);
  q.enqueue(10);
  q.enqueue(20);
  q.enqueue(30);
  q.enqueue(40);
  cout<<q.size<<" is the size of the queue\n";
  cout<<q.front<<" is the front element\n";
  cout<<q.rear<<" is the rear element\n";
  //return 0;



}
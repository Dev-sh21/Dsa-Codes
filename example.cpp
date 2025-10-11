#include<iostream>
using namespace std;
class minHeap{
  int *arr;
  int size;
  int cap;
public:
 minHeap(int x)
 {
  arr=new int[x];
  size=0;
  cap=x;
 }
 int left(int i){ return (2*i+1)/2;}
 int right(int i){ return (2*i+2)/2;}
 int parent(int i){ return (i-1)/2;}



 void insert(int x){
  if(size==cap) return;
  size++;
  arr[size-1]=x;
  for(int i=size-1 ; i!=0 && arr[parent(i)]>arr[i];)
  {
    swap(arr[parent(i)],arr[i]);
    i=parent(i);
  }
 }
 void decreaseKey(int i, int x)
 {
  arr[i]=x;
  while(i!=0 && arr[parent(i)]>arr[i])
  {
    swap(arr[i],arr[parent(i)]);
    i=parent(i);
  }

 }
 void minHeapify(int i)
 {
  int lt=left(i);
  int rt=right(i);
  int smallest=i;
  if(lt<size && arr[lt]<arr[i]) smallest=lt;
  if(rt<size && arr[rt]<arr[i]) smallest=rt;
  if(smallest!=i) {
    swap(arr[i],arr[smallest]);
    minHeapify(smallest);
 }
}

 int extractMin(){
  if(size<=0) return INT_MAX;
  if(size==1){
    size--;
    return arr[0];
  }
  swap(arr[0],arr[size-1]);
  minHeapify(0);
  return arr[size];

 }

 void deleteKey(int i)
 {
   decreaseKey(i,INT_MIN);
   extractMin();

 }

};
int main(){
  minHeap h(11);
  h.insert(3);
  h.insert(5);
  h.deleteKey(0);
  h.insert(15);
  h.insert(20);
  cout << h.extractMin() << endl;
  h.decreaseKey(2, 1);
  cout << h.extractMin() << endl;
  return 0;


}
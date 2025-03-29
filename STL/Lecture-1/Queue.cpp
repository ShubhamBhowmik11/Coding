# include<bits/stdc++.h>

using namespace std;
class QueueArray {
    int front, rear;
    int *array;

public:
    QueueArray(int s){
front=-1,rear=-1;
    }

    void enqueue(int item) {
      if(front == -1 && rear == -1){
            front=0,rear=0;
      }
      array[rear++]=item;
    }
    int dequeue() {
     if(front <= rear){
      return array[front--];
      cout<<"hi";
     }
     else 
     return -1;
    }
};
int main(){
    QueueArray qu(5);
    qu.enqueue(1);
    qu.enqueue(2);
    qu.enqueue(3);
    cout<<qu.dequeue();

}
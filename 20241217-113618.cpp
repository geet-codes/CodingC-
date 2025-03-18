#include<iostream>
using namespace std;
#define SIZE 6
struct queue {
    int front =0,rear=0;
    int arr[SIZE];
};
void enqueue(queue &q,int data)
{
    if((q.rear+1)%SIZE==q.front) {
        cout << "Queue is full";
        return;
    }
    q.rear = (q.rear+1)%SIZE;
    q.arr[q.rear] = data;
};


void dequeue(queue &q)
{
    if(q.rear==q.front) {
        cout << "queue is empty";
        return;
    }
    q.front=(q.front+1)%SIZE;
};

int front(queue &q)
{
//check for emptiness
    if(q.rear==q.front) {
        cout << "queue is empty";
        return 0;
    }
    return q.arr[(q.front+1)%SIZE];
};
int rear(queue &q)
{
//check for emptiness
    if(q.rear==q.front) {
        cout << "queue is empty";
        return 0;
    }
    return q.arr[q.rear];
};
int main()
{
    queue q;
    enqueue(q,10);
    enqueue(q,20);
    enqueue(q,30);
    enqueue(q,40);
    enqueue(q,50);
    dequeue(q);
    dequeue(q);
    enqueue(q,60);
    enqueue(q,70);
    dequeue(q);
    cout << front(q)<< endl;
    cout << rear(q)<< endl;
    cout << "Hello World!" << endl;
    return 0;
}
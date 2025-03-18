#include<iostream>
using namespace std;

#define SIZE 10
struct queue {
    int front = -1,rear = -1;
    int arr[SIZE];
};
void enqueue(queue &q,int data) {
    if (q.rear==SIZE-1) {
        cout <<"queue is full";
        return;
    }
    q.arr[++q.rear]=data;
}

void dequeue(queue &q) {
    if (q.rear==q.front) {
        cout<<"queue is empty";
        return;
    }
    q.front++;
}
int front(queue &q) {
//check for emptiness
    return q.arr[q.front+1];
}
int rear (queue &q) {
//check for emptiness
    return q.arr[q.rear];
}

int main()
{
    cout << "Hello World!" << endl;
    return 0;
}
#include<iostream>
using namespace std;
struct Node {
    int data;
    int priority;
    Node *next;
};
Node *head=nullptr;
Node *createNode(int d,int p) {
    Node *n=new Node;
    n->data=d;
    n->priority=p;
    n->next=nullptr;
    return n;
}
void enqueue (int d,int p) {
    Node *n = createNode (d,p);
    if(head==nullptr) {
        head=n;
        return;
    }
    Node *ptr = head;
    while(ptr->next!=nullptr && ptr->next->priority>=p)
        ptr = ptr->next;
    n->next=ptr->next;
    ptr->next=n;
}
void dequeue (){
if (head == nullptr){
cout << "queue is empty";
return;
}
Node *ptr = head;
head = head->next;
delete ptr;
}
int main()
{

    cout << "Hello World!" << endl;
    return 0;
}
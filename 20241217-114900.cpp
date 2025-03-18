#include<iostream>
using namespace std;
struct Node {
    int data;
    int priority;
    Node *head;
};
Node *head=nullptr,*tail=nullptr;
Node *createNode(int d,int p) {
    Node *n=new Node;
    n->data=;
    n->priority=p;
    n->next=nullptr;
    return n;
}
void enqueue (int d,int p) {
    Node *n = createNode (d,p);
    if(head==nullptr)
        head = tail *n;
    return;
}
Node *ptr = head;
while(ptr->next!=nullptr && ptr->next->priority>=p)
    ptr = ptr->next;
int main()
{
    cout << "Hello World!" << endl;
    return 0;
}
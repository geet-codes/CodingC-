#include<iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};
Node *top =nullptr;
void push (int data) {
    Node *n = new Node;
    n->data=data;
    n->next=top;
    top = n;
}

void pop () {
    if (top==nullptr) {
        cout << "Stack is empty";
        return;
    }
    Node *temp = top;

    top = top ->next;
    delete temp;
}

int gettop() {
    if(top==nullptr) {
        cout<<"Empty";
        return -1;
    }
    return top->data;
}

int main() {
    push(50);
    push(30);
    push(20);
    cout << gettop()<< endl;
}
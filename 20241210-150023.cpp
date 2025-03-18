#include<iostream>
using namespace std;
struct Node {
    int data;
    Node *next;
    Node *prev;
};
Node *head=NULL,*tail=NULL;
Node *createNode(int data) {
    Node *n=new Node;//Node *n=(Node*)malloc(sizeof(Node));
    n->data = data;
    n->next=n->prev=NULL;
    return n;
}
void appendNode(int data) {
    Node *n = createNode(data);
    if(head==NULL && tail==NULL)
    {
        head=tail=n;
        return;
    }
    tail->next=n;
    n->prev=tail;
    tail=n;
}
void printfwd() {
    if(head==NULL && tail==NULL) {
        cout << "DLL is empty\n";
        return;
    }
    Node *ptr=head;
    while(ptr!=NULL) {
        cout << ptr->data << "|";
        ptr=ptr->next;
    }
}
void printbwd() {
    if(head==NULL && tail==NULL) {
        cout << "DLL is empty\n";
        return;
    }
    Node *ptr=tail;
    while(ptr!=NULL) {
        cout << ptr->data << "|";
        ptr=ptr->prev;
    }
}
void prepend(int data) {
    Node *n = createNode(data);
    if(head==NULL && tail==NULL) {
        head=tail=n;
        return;
    }
    n->next = head;
    head->prev = n;
    head = n;
}
int countNode() {
    int count=0;
    Node *ptr=head;
    while(ptr!=NULL) {
        count++;
        ptr=ptr->next;
    }
    return count;
}

int main()
{
    appendNode(10);
    appendNode(28);
    appendNode(20);
    appendNode(30);
    printfwd();
    cout << "" << endl;
    printbwd();
    return 0;
}
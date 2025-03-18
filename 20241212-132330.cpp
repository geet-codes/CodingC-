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

void insertNode(int data,int pos)
{
    if (pos<1) {
        cout << "Invalid pos \n";
        return;
    }
    Node *n = createNode(data);
    Node*ptr = head;
    for(int i=1; i<pos-1 && ptr->next !=NULL; i++)
    {
        ptr=ptr->next;
    }
    if(ptr->prev==NULL) {
        prepend(data);
        return;
    }
    if(ptr->next == NULL) {
        append(data);
        return;
    }
    n->next = ptr->next;
    n->prev = ptr;
    ptr->next->prev = n;
    ptr->next = n;
}
void deleteNode (int pos)
{
    if(pos<1) {
        cout << "Invalid pos\n";
        return;
    }
    Node *ptr = head;
    for(int i=1; i<pos && ptr !=NULL; i++)
        ptr =ptr->next;
    if(ptr==NULL) {
        cout << "Invalid pos\n";
        return;
    }
    if(head==tail) { // only node deleted
        delete ptr;
        head=tail=NULL;
        return;
    }
    if( ptr->prev==NULL ) { //deleting head node;
        head=head->next;
        delete ptr;
        return;
    }
    if( ptr->next == NULL ) {
        tail=tail->prev;
        delete ptr;
        return;
    }
    ptr->prev->next = ptr->next;
    ptr->next->prev = ptr->prev;
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
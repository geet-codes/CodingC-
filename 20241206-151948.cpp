#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node {
int data;
struct Node *next;
};
struct Node* head = NULL;
void insertb(int new_data) {
struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
new_node->data = new_data;
new_node->next = head;
head = new_node;
}
void inserte(int new_data) {
struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
new_node->data = new_data;
new_node->next = NULL;
struct Node* ptr=head;
while(ptr->next!=NULL) {
ptr = ptr->next;
}
ptr->next = new_node;
}
void deleteb()
{
struct Node* temp;
temp=head;
head=head->next;
delete temp;
}
void display() {
struct Node* p;
p=head;
while(p!=NULL) {
cout << p->data << " ";
p = p->next;
}
}
int main()
{
insertb(3);
insertb(1);
inserte(7);
insertb(2);
insertb(9);
deleteb();
cout << "The Linked list:" << endl;
display();
    return 0;
}
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
void display() {
struct Node* ptr;
ptr=head;
while(ptr!=NULL) {
cout << ptr->data << " ";
ptr = ptr->next;
}
}
int main()
{
insertb(3);
insertb(1);
insertb(7);
insertb(2);
insertb(9);
cout << "The Linked list:" << endl;
display();
    return 0;
}
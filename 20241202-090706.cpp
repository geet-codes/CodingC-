#include<iostream>
using namespace std;
struct Node
{
int data;
Node *Addr;
}*Head;
Node *CreateNode(int value)
{
Node NewNode = new Node;
Node NewNode = malloc(sizeof(Node));
NewNode->data = value;
NewNode->Addr = NULL;
return NewNode:
}
int main()
{
Node temp = CreateNode(20);
    cout << "Hello World!" << endl;
    return 0;
}
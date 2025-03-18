#include<iostream>
# define SIZE 10

using namespace std;

struct stack {
    int top=-1;
    int arr [SIZE];
};
void push(stack &s, int data) {
    if(s.top==SIZE-1) {
        cout << "stack is full";
        return;
    }
    s.arr[++s.top] = data;
}
void pop(stack &s) {
    if(s.top == -1) {
        cout << "Stack is empty";
        return;
    }
    s.top--;
}
int showgettop(stack &s) {
    if(s.top == -1) {
        cout << "stack is empty";
        return -1;
    }
    return s.arr[s.top];
}
int main() {
    stack s;
    push(s,20);
    push(s,30);
    push(s,50);
    cout << showgettop (s)<< endl;
    pop(s);
    cout <<showgettop(s)<< endl;
}
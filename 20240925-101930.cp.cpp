#include<iostream>
using namespace std;

int main()
{   int k=int(' ');
cout << k<< endl;
int a,b;
    char o;
    cin >> a >>o  >> b;
    switch(o) {
    case '+':
        cout << a+b << endl;
        break;
    case '-':
        cout << a-b << endl;
        break;
    case '/':
        if(b==0)
            cout << "inf" << endl;
        else
            cout << a/b << endl;
        break;
    case '*':
        cout << a*b<< endl;
        break;
    case '%':
        cout << a%b << endl;
        break;
    default:
        cout << "na" << endl;
    }
    cout << "Hello World!" << endl;
    return 0;
}
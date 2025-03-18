#include<iostream>
using namespace std;

void r(int *p)
{
cout << *p << endl;
*p*=10;
cout << *p << endl;
}
int main()
{
int n=10;
r(&n);
cout << n << endl;
    cout << "Hello World!" << endl;
    return 0;
}
#include<iostream>
using namespace std;
int f(int a)
{
    int f=1;
    for(int i=1; i<=a; i++)
    {
        f=f*i;
    }
    return f;
}
int main()
{
    cout  << endl<<f(5);
    cout << "Hello World!" << endl;
    return 0;
}
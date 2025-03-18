#include<iostream>
using namespace std;

int main()
{
    int i,n=10;
    for(i=2; i<n; i++)
        if(n%i==0)
        {
            break;
        }
    if(i==n)
        cout << "p" << endl;
    else
        cout << "n" << endl;
    cout << "Hello World!" << endl;
    return 0;
}
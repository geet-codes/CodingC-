#include<iostream>
using namespace std;

int main()
{
    int n=407,s=0,t=n;
    while(n!=0)
    {
        int k=n%10;
        s=s+k*k*k;
        n=n/10;
    }
    if(t!=s)
    {
        cout << "n" << endl;
    }
    else
    {
        cout << "a" << endl;
    }
    return 0;
}
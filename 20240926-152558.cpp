#include<iostream>
using namespace std;

int main()
{
    int n=11,r=0,t=n;
    while(n!=0)
    {
        int k=n%10;
        r=r*10+k;
        n=n/10;
    }
    if(t!=r)
    {
        cout << "n" << endl;
    }
    else
    {
        cout << "p" << endl;
    }
    return 0;
}
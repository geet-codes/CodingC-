#include<iostream>
using namespace std;

int main()
{
    int a[]= {10,20,30,40,50,60,70,80,90,100},t=0,l=sizeof(a)/sizeof(a[0]),m=5;
    for(int i=l-1; i>m; i--,m++)
    {
        t=a[m];
        a[m]=a[i];
        a[i]=t;
    }
    for(int i=0; i<l; i++)
    {
        cout << a[i] << endl;
    }
    cout << "Hello World!" << endl;
    return 0;
}
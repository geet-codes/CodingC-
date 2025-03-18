#include<iostream>
using namespace std;

int main()
{
    int a[]= {10,20,100,30,50,5},m=a[0],x=a[0];
    for(int i=0; i<6; i++)
    {
        if(a[i]>x)
            x=a[i];
        if(a[i]<m)
            m=a[i];
    }
    cout << m << ' ' << x << endl;
    cout << "Hello World!" << endl;
    return 0;
}
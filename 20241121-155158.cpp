#include<iostream>
using namespace std;

int main()
{
    int a[]= {1,0,0,1,1,1,0,0},c1=0,c0=0;
    for(int i=0; i<8; i++)
    {
        if(a[i]==0)
        {
            a[i]=1;
            c1++;
        }
        else
        {
            a[i]=0;
            c0++;
        }
        cout << a[i] << endl;
    }
    cout << c0 << ' ' << c1 << endl;
    cout << "Hello World!" << endl;
    return 0;
}
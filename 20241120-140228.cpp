#include<iostream>
using namespace std;

int main()
{
    int a[4]= {10,20,30,40},b[3]= {50,60,70},as=0,bs=0,t=0,c[4];
    for(int i=0,j=0; i<4,j<4; i++,j++)
    {
        c[i]=a[i]+b[j];
        t+=c[i];
    }
    cout << t << endl;
    cout << "Hello World!" << endl;
    return 0;
}
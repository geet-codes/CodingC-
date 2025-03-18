#include<iostream>
using namespace std;

int main()
{
    int a[6]= {3,1,-2,-5,2,-4},p[3],n[3];
    int t=0,k=0,l=0;
    for(int i=0; i<6; i++)
    {
        if(a[i]<0)
        {
            n[k]=a[i];
            k++;
        }
        else
        {
            p[l]=a[i];
            l++;
        }
    }
    for(int i=0; i<6; i++)
    {
        if(i%2!=0)
        {
            a[i]=n[t];
            t++;
        }
        else
        {
            a[i]=p[t];
        }
    }
    for(int i=0; i<6; i++)
    {
        cout << a[i] << endl;
    }
    cout << "Hello World!" << endl;
    return 0;
}
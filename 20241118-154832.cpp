#include<iostream>
using namespace std;

int main()
{
    int a[]= {23,7,7,11,15,22,31},t=42,l=sizeof(a)/sizeof(a[0]);
    for (int i=0; i<l; i++)
    {
        for (int j=i+1; j<l; j++)
        {
            if(a[i]==a[j])
            {
                break;
            }
            if(a[i]+a[j]==t)
            {
                cout << i << "," << j;
            }
            if(a[i]*a[j]==t)
            {
                cout << i << "," << j;
            }
            if(a[i]-a[j]==t)
            {
                cout << i << "," << j;
            }
            
        }
    }
    cout << "Hello World!" << endl;
    return 0;
}
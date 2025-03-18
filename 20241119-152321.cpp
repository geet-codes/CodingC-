#include<iostream>
using namespace std;

int main()
{
    int a[]= {1,2,3,1,2,4,2,3},l=sizeof(a)/sizeof(*a);
    for (int i=0; i<l; i++)
    {
        int f;
        for (int j=i+1; j<l; j++)
        {
            if(a[i]==a[j]&&j!=i)
            {
                f=0;
                break;
            }
            else
            {
                f=1;
            }
        }
        if (f==1)
        {
        cout << a[i] << endl;
        }
    }
    cout << "Hello World!" << endl;
    return 0;
}
#include<iostream>
using namespace std;

int main()
{
    int a[]= {1,2,1,3,4,2,3},l=sizeof(a)/sizeof(*a);
    for (int i=0; i<l; i++)
    {
        int j;
        for (j=0; j!=i&&a[j]!=a[i]; j++){}
        if(j==i)
            cout << a[j] << endl;
    }
    cout << "Hello World!" << endl;
    return 0;
}
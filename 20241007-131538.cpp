#include<iostream>
using namespace std;

int main()
{
    int arr[]= {4,6,7,9,11,9},ax,in;
    ax=arr[0];
    in=arr[0];
    int size=sizeof(arr)/sizeof(arr[0]);
    cout << sizeof(arr) << ' ' << sizeof(arr[0]) <<' ' <<size <<endl;
    /*int n,s,p,min,max;
    cin >> n;
    int a[n];
    //q1
    for(int i=1; i<=n; i++)
    {
        cin >> a[i];
    }
    for(int z=1; z<=n; z++)
    {
        cout << a[z];
    }
    //q2
    for(int i=1; i<=n; i++)
    {
        s=s+a[i];
        p=p*a[i];
    }
    cout << s << p << s/n << endl;*/
    //q3
    for(int i=0; i<=6; i++)
    {
        if(arr[i]>ax)
        {
            ax=arr[i];
        }
        if(arr[i]<in)
        {
            in=arr[i];
        }

    }
    cout << in << ' ' << ax;
    cout << "Hello World!" << endl;
    return 0;
}
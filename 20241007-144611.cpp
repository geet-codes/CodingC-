#include<iostream>
using namespace std;

int main()
{
    int arr[]= {4,6,7,9,11,9},ax,in,sin,sax;
    ax=arr[0];
    in=arr[0];
    int size=sizeof(arr)/sizeof(arr[0]);
    cout << sizeof(arr) << ' ' << sizeof(arr[0]) <<' ' <<size <<endl;
    for(int i=0; i<6; i++)
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
    cout << sin << ' ' << sax;
    cout << "Hello World!" << endl;
    return 0;
}
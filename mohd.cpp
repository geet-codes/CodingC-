#include<iostream>
using namespace std;

int main()
{
    int arr[]= {4,6,7,9,11,9},ax,in;
    ax=arr[0];
    in=arr[0];
    //q3
    for(int i=0; i<=6; i++)
    {
        if(arr[i]>ax)
        {
            ax=arr[i];
        }
        for(int j=0;j<=6;j++)
        {
        if(arr[i]<in)
        {
            in=arr[i];
        }
        }
    }
    cout << in << ' ' << ax;
    cout << "Hello World!" << endl;
    return 0;
}
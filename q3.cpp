#include<iostream>
using namespace std;

int main()
{
    int arr[]= {32,79,53,22,9,1},ax,in;
    in=arr[0];
    ax=arr[0];
    int size=sizeof(arr)/sizeof(arr[0]);
    cout << size << endl;
    //q3
    for(int j=1; j<6; j++)
    {
        if(arr[j]<in)
        {
            in=arr[j];
        }
    }
    for(int i=1; i<6; i++)
    {
        if(arr[i]>ax)
        {
            ax=arr[i];
        }
    }
    cout << ax << ' ' << in;
    cout << "  " << "Hello World!" << endl;
    return 0;
}
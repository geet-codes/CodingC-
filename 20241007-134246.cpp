#include<iostream>
using namespace std;

int main()
{
    int arr[]= {32,79,53,22,9,1},ax,in,a[6];
    int size=sizeof(arr)/sizeof(arr[0]);
    cout << size << endl;
    //q4
    for(int i=0,j=6;i<6,j>=0;i++,j--)
    {
    a[i]=arr[j];
    cout << a[i] << ' ';
    }
    for(int k=0;k<6;k++)
    cout << ' ' << a[k];
    cout << "  " << "Hello World!" << endl;
    return 0;
}
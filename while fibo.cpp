#include<iostream>
using namespace std;

int main()
{
    int f=1,s=1,n=10,temp,i=1;
    cout <<f << " " <<s<<' ';
    while(i<=n-2)
    {
        temp=f+s;
        cout<<temp<<' ';
        f=s;
        s=temp;
        i++;
    }
    cout <<endl << "Hello World!" << endl;
    return 0;
}
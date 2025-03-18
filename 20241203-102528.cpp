#include<iostream>
using namespace std;
int f(int i)
{
    if(i==2)
        return 2;
    else
        return i*f(i-1);
}
int main()
{
    int n,t=0;
    cin >> n;
    for(int i=2; i<=(n/2); i++)
    {
        if (n%i==0)
        {
            t=1;
            break;
        }
    }
    if(t==0)
        cout << f(n);
    cout << "Hello World!" << endl;
    return 0;
}
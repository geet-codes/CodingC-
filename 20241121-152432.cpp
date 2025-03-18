#include<iostream>
using namespace std;

int main()
{
    int a[]= {1,2,3},b[]= {1,2,3,4},s=0;
    for(int t=1,i=3; i>=0; i--,t*=10)
    {
        s+=(a[i]+b[i])*t;
    }
    cout << s << endl;
    cout << "Hello World!" << endl;
    return 0;
}
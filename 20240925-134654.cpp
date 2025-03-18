#include<iostream>
using namespace std;

int main()
{
    int n=1234567890,i=0,r,d,a,m=1,f;
    cin >> d;
    while(n>0) {
        r=n%10;
       // cout << r;
        n/=10;
        i++;
        if(d==r) {
            f=i-1;
            cout << i << endl;
        }
    }
    cout << endl<<i<<"\n"<<i-f;
    return 0;
}
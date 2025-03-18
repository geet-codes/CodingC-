#include<iostream>
using namespace std;

int main()
{
    int n=123,i=0,r,d,a,m=1,f,z=0;
    //cin >> d;
    while(n>0) {
        r=n%10;
        z=z+r*m;
        //cout << r;
        n/=10;
        //i++;
        /* if(d==r) {
             f=i-1;
             cout << i << endl;
         }*/
         m=m*10;
         cout << z;
    }
    // cout << endl<<i<<"\n"<<i-f;
    cout << z;
    return 0;
}
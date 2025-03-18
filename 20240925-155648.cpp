#include<iostream>
using namespace std;

int main()
{
    int n,i=0,r,d,a,f;
    cin >> n;
    //cin >> d;
    while(n>0) {
     //   r=n%10;
      //  cout << r;
        n/=10;
        i++;
        /* if(d==r) {
             f=i-1;
             cout << i << endl;
         }*/
    }
    cout << endl<<i<<"\n"<<i-f;
    return 0;
}
#include<iostream>
using namespace std;

int main()
{
int n=1234567890,r=0;
while(n!=0)
{
int k=n%10;
r=r*10+k;
n=n/10;
}
    cout << r << endl;
    return 0;
}
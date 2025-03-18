#include<iostream>
using namespace std;

int main()
{
int k=0,s=0;
for(int i=1;i<=3;i++)
{
k=k*10+9;
s=s+k;
}
    cout << s << endl;
    return 0;
}
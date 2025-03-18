#include<iostream>
using namespace std;

int main()
{
int n,o,e,i;
cin >> n;
for(i=1;i<=n;i++)
{
if(i%2==0)
e+=i;
else
o+=i;
}
cout << o <<e << endl;
    cout << "Hello World!" << endl;
    return 0;
}
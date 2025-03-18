#include<iostream>
using namespace std;

int main()
{
int a[4][4]={{0,0,1,1},{1,1,1,1},{0,0,0,0},{0,1,0,1}},s,m=0;
for(int i=0;i<4;i++)
{
int c=0;
for(int j=0;j<4;j++)
{
if(a[i][j]==1)
c++;
}
if(c>m)
{
m=c;
s=i;
}
}
cout << s << endl;
cout << m << endl;
    cout << "Hello World!" << endl;
    return 0;
}
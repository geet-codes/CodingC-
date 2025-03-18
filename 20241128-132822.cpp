#include<iostream>
using namespace std;

int main()
{
int a[]={1,2,4,8,10,11,3,3};
for(int i=0;i<8;i++)
{
if(a[i-1]<a[i]&&a[i+1]<a[i])
{
cout << i << endl;
cout << a[i] << endl;
}
}
    cout << "Hello World!" << endl;
    return 0;
}
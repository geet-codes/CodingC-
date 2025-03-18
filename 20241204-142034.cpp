#include<iostream>
using namespace std;
int main()
{
int n;
cin >> n;
if(n<5000)
{
while(n>=1000)
{
cout << "m";
n=n-1000;
}
while(n>=500)
{
cout << "d";
n=n-500;
}
if(n>=400)
{
cout << "cd";
n=n-100;
}
while(n>=100)
{
cout << "c";
n=n-100;
}
if(n>=90)
{
cout << "xc";
n=n-90;
}
if(n>=50)
{
cout << "l";
n=n-50;
}
if(n>=40)
{
cout << "xl";
n=n-40;
}
while(n>=10)
{
cout << "x";
n=n-10;
}

}
    cout << "Hello World!" << endl;
    return 0;
}
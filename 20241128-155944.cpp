#include<iostream>
using namespace std;
int g(int a,int b)
{
if(a<b)
return 0;
if(a>=b)
return g(a-b,b)+1;
}
int main()
{
cout << g(3,5) << endl;
cout << g(13,5) << endl;
cout << g(9100,11) << endl;
    cout << "Hello World!" << endl;
    return 0;
}
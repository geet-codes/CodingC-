#include<iostream>
using namespace std;
void show(int a,string b)
{
cout << a << b;
}
void show(string a,int b)
{
cout << a << b;
}
int main()
{
show(0,"i");
show("k",6);
    cout << "Hello World!" << endl;
    return 0;
}
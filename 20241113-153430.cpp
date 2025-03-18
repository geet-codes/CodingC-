#include<iostream>
using namespace std;

class demo
{
public:
    demo()
    {
        cout<<"default";
    }
    demo(int n)
    {
        cout<<"overload"<<n;
    }
    void add(int a,int b)
    {
        cout<<a+b;
    }
    void add(string str1,string str2)
    {
        cout<<str1+str2;
    }
};
int main()
{
    /*demo d;
    demo e(3);
    d.add(1,2);
    cout << "" << endl;
    d.add("ab","cd");*/

    demo dd(1000);
    dd.add(100,500);
    dd.add("gl","bl");
    cout << "Hello World!" << endl;
    return 0;
}
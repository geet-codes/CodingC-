#include<iostream>
using namespace std;
class s
{
public:
    int a(int l,int b)
    {
        return l*b;
    }
    float a(float r)
    {
        return 3.14*r*r;
    }
};
/*class t
{
public:
    int a(int a,int b)
    {
        return (a*b)/2;
    }
    int a(int x,int y)
    {
        return x*y*0.5;
    }
};*/
int main()
{
    s s;
    cout <<s.a(2,3)<< endl;
    cout << s.a(3) << endl;
    /*t t;
    cout<<t.a(2,3);
    cout << t.a(3,3);*/
    return 0;
}
#include<iostream>
using namespace std;
class tp
{
private:
    long pc;
    string p;
    int nt,nb;
public:
    tp()
    {
        pc=1001;
        p="agra";
        nt=5;
        nb=1;
    }
    void np()
    {
        cin >> pc>>p>>nt;
        if(nt<20)
            nb=1;
        else if(nt>=20&&nt<40)
            nb=2;
        else if(nt>=40)
            nb=3;
    }
    void sp()
    {
        cout << pc<<endl<<p<<endl<<nt<<endl<<nb;
    }
};
int main()
{
    tp p1;
    p1.np();
    p1.sp();
    return 0;
}
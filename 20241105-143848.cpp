#include<iostream>
using namespace std;
class stu
{
    int roll;
    string str;
    string clg;
public:
    stu()
    {
        roll=1;
        str="s";
        clg="glbl";
    }
    stu(stu &ss)
    {
        roll=2;
        str=ss.str;
        clg=ss.clg;
    }
    stu(stu &ss,int r)
    {
        roll=r;
        str=ss.str;
        clg=ss.clg;
    }
    void display()
    {
        cout <<roll<<  endl;
        cout << str << endl;
        cout << clg<< endl;
    }
};
int main()
{
    stu s1;
    s1.display();
    stu s2(s1);
    s2.display();
    stu s3(s1,3);
    s3.display();

    cout << "Hello World!" << endl;
    return 0;
}
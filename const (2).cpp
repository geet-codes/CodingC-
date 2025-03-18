#include<iostream>
using namespace std;
class stu
{
    int id;
    char ch;
public:
    stu()
    {
        id=1;
        ch='a';
    }
    stu(int id,char cc)
    {
        id=this.id;
        ch=cc;
    }
public:
    void show()
    {
        cout <<id << "    " << ch <<endl;
    }
};
int main()
{
    stu s1;
    stu s2(2,'b');
    s1.show();
    s2.show();
    cout << "Hello World!" << endl;
    return 0;
}
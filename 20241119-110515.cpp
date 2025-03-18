#include<iostream>
using namespace std;
/*int add(int x,int y)
{
return x+y;
}*/
void add(int &x,int &y)
{
    *x=3000;
    *y=4000;
}
int main()
{
    int a=1000,b=2000;
    add(&a,&b);
//add(a,b);
    cout << "Hello World!" << endl;
    return 0;
}
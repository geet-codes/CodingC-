#include<iostream>
using namespace std;

int main()
{
    int i,j;
    for ( i=0, j=2; i<3,j>=0; i++,j--)
    {
        cout <<i << "----" <<j<< endl;
    }
    for ( i=0, j=0; i<3,j<3; i++,j++)
    {
        cout <<i << "----" <<j<< endl;
    }
    cout << "Hello World!" << endl;
    return 0;
}
#include<iostream>
using namespace std;

int main()
{
    string str="Hello World. I love my Country";
    int l=str.length(),c=0;
    for (int i=l-1; i>=0; i--)
    {
        if(str[i]==' ')
            break;
        else
            c++;
    }
    cout << c << endl;
    cout << "Hello World!" << endl;
    return 0;
}
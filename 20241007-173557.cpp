#include<iostream>
#define MAX 100
using namespace std;

int main()
{   int a;
    cin >> a;
    while(1)
    {
        switch (a)
        {
        case 1:
            break;
        case 6:
            exit(1);
        }
    }
    cout << "Hello World!" << endl;
}
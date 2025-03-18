#include<iostream>
using namespace std;

int main()
{
    int Arr[10];
    for(int i=0; i<5; i++)
    {
        cin >> Arr[i];
        cout << "\n" << endl;
    }
    for(int i=0; i<5; i++)
    {
        cout << "\n" <<Arr[i]<< endl;
        cout << &Arr[i] << endl;
    }
    cout << "Hello World!" << endl;
    return 0;
}
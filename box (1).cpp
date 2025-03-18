#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        if(i==n||i==1)
        {
            for(int j=1; j<=n; j++)
            {
                cout << "* ";
            }
        }
        else
        {
            for(int k=1; k<=n; k++)
            {
                if(k==1||k==n)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
        }
        cout << "" << endl;
    }
    cout << "Hello World!" << endl;
    return 0;
}
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        if(i==1)
        {
            for(int j=1; j<=n; j++)
            {
                if (j==1||j<=n&&j>=n/2)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
        }
        if(i>1&&i<n/2)
        {
            for(int m=1; m<=n; m++)
            {
                if(m==1||m==n/2)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
        }
        if(i==n/2)
        {
            for(int k=1; k<=n; k++)
            {
                cout << "* ";
            }
        }
        if(i>n/2&&i<n)
        {
            for(int o=1; o<=n; o++)
            {
                if(o==n/2||o==n)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
        }
        if(i==n)
        {
            for(int l=1; l<=n; l++)
            {
                if(l>=1&&l<=n/2||l==n)
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
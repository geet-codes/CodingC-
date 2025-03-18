#include<iostream>
using namespace std;

int main()
{
    int n=11;
    bool j=0;
    cin >> n;
    for(int i=2; i<n/2; i++)
        if(n%i==0)
        {
            j++;
            break;
        }
    if(j==1)
        cout << "n" << endl;
    else
        cout << "p" << endl;
    cout << "Hello World!" << endl;
    return 0;
}
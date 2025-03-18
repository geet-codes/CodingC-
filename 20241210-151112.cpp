#include<iostream>
using namespace std;


void BubbleSort(int a[],int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(a[j] > a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        cout << " " << a[i];
    }
}
int main()
{
    int A[] = {-2,1,90,3,100,20};
    int size = sizeof(A)/sizeof(A[0]);

    BubbleSort(A,size);
}
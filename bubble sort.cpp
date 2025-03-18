#include<iostream>
using namespace std;


void BubbleSort(int a[],int n)
{

    for(int i=0; i<n; i++)
    {
        cout << a[i] << " ";
    }
}
int main()
{
    int A[] = {-2,1,90,3,100,3};
    int size = sizeof(A)/sizeof(A[0]);
    
    for(int i=0; i<size-1; i++)
    {
        for(int j=0; j<size-i-1; j++)
        {
            if(A[j] < A[j+1])
            {
                int temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }

    BubbleSort(A,size);
}
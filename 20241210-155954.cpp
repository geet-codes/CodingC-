#include<iostream>
using namespace std;


void SelectionSort(int a[],int n)
{
    for(int i=0; i<n ; i++)
    {
        int margin = i;
        for(int j=i; j<n-1; j++)
        {
            if(a[j] > a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;

                margin = j;
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
    int A[] = {-2,1,90,3,100,2};
    int size = sizeof(A)/sizeof(A[0]);
    SelectionSort(A,size);
}
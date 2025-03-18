#include <iostream>
using namespace std;

int main() {
    int n[]={10,20,30,40,50,60,70,80,90,100},t;
    int size = sizeof(n)/sizeof(n[0]);
    cin>> t;
    for(int i=t+1,j=size-1;i<j;i++,j--){
        int temp = n[i];
        n[i] = n[j];
        n[j] = temp;
        //cout << ar[i] << " ";
    }
    for(int k=0;k<=size-1;k++){
        cout << " " << n[k];
    }
    return 0;
}
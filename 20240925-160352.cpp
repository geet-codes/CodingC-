#include<iostream>
using namespace std;

int main()
{   char ch;
    cin >> ch;
    if ((int)ch>96&&ch<123||ch>64&&ch<91) {
        cout <<(int)ch << endl;
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') {
            cout << "vowel" << endl;
        }
        else {
            cout << "consonant";
        }
    } else {
        cout << "not letter";
    }
    return 0;
}
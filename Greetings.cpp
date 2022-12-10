/*
Solution by Riley Primeau
https://open.kattis.com/contests/sc64j9/problems/greetings2
*/
#include<iostream>

using namespace std;

int main()
{
    char c;
    cin.get(c);
    while(c != '\n')
    {
        if(c == 'e')
            cout<<c<<c;
        else
            cout<<c;
        cin.get(c);
    }
    cout<<endl;
}
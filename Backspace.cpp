/*
Solution by Riley Primeau
https://open.kattis.com/contests/ntwqq3/problems/backspace
*/

#include <iostream>
#include <string>
#include<vector>

using namespace std;

int main()
{
    vector<char> actual;
    string input;
    cin>>input;
    for(int i = 0; i<input.length(); i++)
    {
        if(input[i] != '<')
            actual.push_back(input[i]);
        else 
            actual.pop_back();
    }

    for(auto i:actual) cout<<i;
    cout<<endl;
}
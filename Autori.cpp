/*
Solution by Riley Primeau
https://open.kattis.com/problems/autori
*/

#include <iostream> 

using namespace std;

int main()
{
    string input;
    cin>>input;
    cout<<input[0];
    for(int i = 0; i <input.size(); i++)
    {
        if(input[i] == '-')
            cout << input[i+1];
    }
    cout<<endl;
}
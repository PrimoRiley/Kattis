/*
Solution by Riley Primeau
https://open.kattis.com/problems/iboard
*/

#include<iostream>
#include<string>
#include<vector>
#include<bitset>
using namespace std;

/*
__builtin_popcount
bitset<number of bits>
*/

int main()
{
    string input;
    vector<string> word;
    while(getline(cin, input))
    {
        word.push_back(input);
    }
    
    
    for(int i = 0; i<word.size(); i++)
    {
        int zerocnt = 0;
        int onecnt = 0;
        int size = 0;
        for(int j = 0; j<word[i].length(); j++)
        {
            bitset<7> b(word[i][j]);
            onecnt = onecnt + b.count();
            size = size + b.size();
            zerocnt = size - onecnt;
        }
        if(onecnt % 2 == 0 && zerocnt % 2 == 0)
            cout<<"free"<<endl;
        else
         cout<<"trapped"<<endl;
    }
}
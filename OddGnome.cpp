/*
Solution by Riley Primeau
https://open.kattis.com/contests/jxarux/problems/oddgnome
*/


#include<iostream>
#include<vector>
#include<sstream>

using namespace std;

/* 
3
7 1 2 3 4 5 8 6
5 3 4 5 2 6
4 10 11 20 12
*/

int main()
{
    string s;
    getline(std::cin, s, static_cast<char>(EOF));
    stringstream ss;
    ss << s;
    
    int groups;
    int numberOfGnomes;
    ss>>groups;
    
    vector<vector<int>> vect(groups);
    int size;
    
    for(int i = 0; i<groups; i++)
    {
        ss>>size;
        for(int j = 0; j<size; j++)
        {
            int number;
            ss>>number;
            vect[i].push_back(number);
        }
    }


    for(int i = 0; i<groups; i++)
    {
        for(int j = 0; j<vect[i].size(); j++)
        {
            if(vect[i][j + 1] != vect[i][j] + 1)
            {
                cout<<j+2<<endl; //accounts for loop being one 'j' value behind and index starting at 0
                break;
            }
        }
    }
}
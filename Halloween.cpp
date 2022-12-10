/*
Solution by Riley Primeau
https://open.kattis.com/contests/sc64j9/problems/isithalloween
*/

#include<iostream>

using namespace std;

int main()
{
    string month;
    int day;

    cin>>month;
    cin>>day;

    if(month == "OCT" && day == 31)
        cout<<"yup"<<endl;
    else if(month == "DEC" && day == 25)
        cout<<"yup"<<endl;
    else
        cout<<"nope"<<endl;
}
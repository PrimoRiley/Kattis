#include <iostream>
#include <stdlib.h>
using namespace std;

//https://open.kattis.com/problems/ninetynine

int main()
{
    int sum = 1;
    cout<<sum<<endl;

    while(sum<=98)
    {
        cin >> sum;
        sum += min(3 - sum%3, 2);
        cout<<sum<<endl;
    }
}
 
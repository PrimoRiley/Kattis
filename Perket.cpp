/*
Solution by Riley Primeau
https://open.kattis.com/contests/vbqy3f/problems/perket
*/

#include<iostream>
#include<vector>
#include<limits>

using namespace std;

#define LSOne(S) ((S) & -(S));

int main()
{
    int ingredients;
    cin>>ingredients;

    vector<pair<int,int>> v;

    for(int i = 0; i<ingredients; i++)
    {
        int x,y;
        cin>>x>>y;
        // pushback into vector pair
        v.push_back(make_pair(x,y));
    }

    // max machine int
    int difference = numeric_limits<int>::max();

    for (int i = 1; i < (1<<v.size()); i++) {
        int sourSum = 1;
        int bitterSum = 0;
        //cout<<"[ ";
        int mask = i;
        while (mask) {
            
            int twoPowJ = LSOne(mask);
            int j = __builtin_ctz(twoPowJ);
            //cout<<v[j].first<<' '<<v[j].second<<' ';
            sourSum *= v[j].first;
            bitterSum += v[j].second;
            if(abs(sourSum - bitterSum) < difference)
                difference = abs(sourSum - bitterSum);
            mask -= twoPowJ;
        }
        //cout<<']'<< " Sour sum: "<<sourSum<<" Bitter Sum: "<<bitterSum<<" Difference: "<<difference<<endl;
    }

    cout<<difference<<endl;
}
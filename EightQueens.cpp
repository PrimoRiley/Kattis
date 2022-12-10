/*
Solution by Riley Primeau
https://open.kattis.com/contests/sc64j9/problems/8queens
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string line;
    int row = 0;
    vector<pair<int, int>> queens;
    while (getline(cin, line))
    {
        int colm;
        row++;
        for (int i = 0; i < line.size(); i++)
            if (line[i] == '*')
                colm = i + 1;
        queens.push_back(make_pair(row, colm));
    }
    bool valid = true;
    while (valid)
    {
        for (int i = 0; i < queens.size(); i++)
        {
            for (int j = i + 1; j < queens.size(); j++)
            {
                if (queens[i].first == queens[j].first)
                {
                    valid = false;
                }
                if (queens[i].second == queens[j].second)
                {
                    valid = false;
                }
                if (queens[i].first + queens[i].second == queens[j].first + queens[j].second || queens[i].first - queens[i].second == queens[j].first - queens[j].second) // slope/diagonal is the same
                {
                    valid = false;
                }
            }
        }
        break;
    }

    if (queens.size() != 8)
        valid = false;
    if (valid)
        cout << "valid" << endl;
    else
        cout << "invalid" << endl;
}
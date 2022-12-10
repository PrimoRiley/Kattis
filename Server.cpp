/*
Solution by Riley Primeau
https://open.kattis.com/contests/jxarux/problems/server
*/

#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main()
{
    string s;
    getline(std::cin, s, static_cast<char>(EOF));
    stringstream ss;
    ss << s;

    int numberOfTasks;
    ss >> numberOfTasks;
    int duration;
    ss >> duration;

    vector<int> tasks(numberOfTasks);

    for (int i = 0; i < numberOfTasks; i++)
    {
        int taskDuration;
        ss >> taskDuration;
        tasks[i] = taskDuration;
    }

    int i = 0;
    int total = 0;

    for (i; i < numberOfTasks; i++)
    {
        if (total < duration)
        {
            total = total + tasks[i];
        } else break;
    }

    if (total == duration || total < duration)
        cout << i << endl;
    else
        cout << i - 1 << endl;
}
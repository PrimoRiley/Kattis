/*
Solution by Riley Primeau
https://open.kattis.com/contests/jxarux/problems/mjehuric
*/

#include <iostream>
#include <vector>
using namespace std;

void printArr(vector<int> &);
void sort(vector<int> &);

int main()
{
    vector<int> input;
    for (int i = 0; i < 5; i++)
    {
        int value;
        cin >> value;
        input.push_back(value);
    }
    sort(input);
}

void sort(vector<int> &arr)
{
    vector<int> basecase;
    for (int i = 1; i < 6; i++)
        basecase.push_back(i);
    for (int i = 0; i < 4; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
            printArr(arr);
        }
    }
    if (!(arr == basecase))
        sort(arr);
}

void printArr(vector<int> &arr)
{
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
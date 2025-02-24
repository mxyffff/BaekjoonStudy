#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int findMode(const vector<int> &arr)
{
    unordered_map<int, int> freq;
    int mode = arr[0];
    int max = 0;

    for (int num : arr)
    {
        freq[num]++;
        if (freq[num] > max)
        {
            max = freq[num];
            mode = num;
        }
    }
    return mode;
}

int main()
{
    vector<int> num(10);
    int mode_num = 0, avg = 0;

    for (int i = 0; i < 10; i++)
    {
        cin >> num[i];
        avg += num[i];
    }
    avg /= 10;

    cout << avg << endl
         << findMode(num);
}
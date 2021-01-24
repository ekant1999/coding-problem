#include <iostream>
#include <vector>
using namespace std;

bool isValidSubsequence(vector<int> array, vector<int> sequence)
{
    int i = 0, j = 0;
    while (i < array.size())
    {
        if (array[i] == sequence[j])
        {
            i++;
            j++;
        }
        else
            i++;
    }
    if (j == sequence.size())
        return true;
    return false;
}

int main()
{
    vector<int> inp = {1, 4, 5, 2, 6, 7, 2, 1, 7};
    vector<int> seq = {4, 7, 1};
    cout << isValidSubsequence(inp, seq) << endl;
    return 0;
}


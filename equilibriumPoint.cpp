#include<bits/stdc++.h>
using namespace std;
int findPivot(vector<int> a)
{   int n = a.size();
    int start = 0 , end = n - 1;
    int leftSum = 0 , rightSum = 0;
    int i = 0;

    if (n == 1)
    {
        return 0;
    }

    while (true)
    {
        if (leftSum == rightSum and start == end)
        {
            return start;
        }
        if (start >= end)
            return -1;

        if (leftSum < rightSum)
        {
            leftSum += a[start];
            start++;
        }
        else if (rightSum < leftSum) {
            rightSum += a[end];
            end--;
        }
        else
        {
            leftSum += a[start];
            start++;
        }
    }
    return -1;
}
int main()
{
    vector<int> inp = {1, 2, 2, 9, 3, 2};
    int res = findPivot(inp);
    cout << res;
}

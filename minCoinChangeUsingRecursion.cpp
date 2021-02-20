
#include <bits/stdc++.h>
using namespace std;

vector<int> bestSumHelper(int targetSum, vector<int> numbers, unordered_map<int, vector<int>> &memo) {
    if(memo.find(targetSum) != memo.end()) {
        return memo[targetSum];
    }
    if(targetSum == 0) {
        return {};
    }
    if(targetSum < 0) {
        return {INT_MIN};
    }

    vector<int> shortestCombination = {INT_MIN};

    for(int i=0; i<numbers.size(); ++i) {
        int rem = targetSum-numbers[i];
        vector<int> currCombination = bestSumHelper(rem, numbers, memo);
        if(currCombination != (vector<int>){INT_MIN}) {
            currCombination.push_back(numbers[i]);
            if(shortestCombination == (vector<int>){INT_MIN} || shortestCombination.size() > currCombination.size()) {
                shortestCombination = currCombination;
            }
        }

    }
    memo[targetSum] = shortestCombination;
    return shortestCombination;
}

vector<int> bestSum(int target, vector<int> numbers) {
    unordered_map<int, vector<int>> memo;
    return bestSumHelper(target, numbers, memo);
}


int main()
{
    std::vector<int> result = bestSum(7656,{438,86,218,138,358,152,129});
    for (auto i : result)
    {
        cout << i << "  ";
    }
    return 0;
}

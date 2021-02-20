#include <iostream>
#include <vector>
using namespace std;
std::vector<int> globalRes;
    
std::vector<int> howSum(int target, std::vector<int> array)
{
    if (target == 0)
        return {};
    if (target < 0)
        return {-1};
    for (int i = 0; i < array.size(); i++)
    {
        int rem = target - array[i];
        std::vector<int> res = howSum(rem, array);
        if (res.size() == 0 || res[0] != -1)
        {
            res.push_back(array[i]);
            return (res);
        }
    }
    return {-1};
}
int main()
{
    std::vector<int> result = howSum(12, {1, 5, 3, 4, 9});
    for (auto i : result)
    {
        cout << i << "  ";
    }

    return 0;
}

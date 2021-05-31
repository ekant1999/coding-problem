#include <iostream>
#include <vector>
using namespace std;
std::vector<int> globalRes;

//time - O(n^m)*m   space- O(m)
std::vector<int> howSum(int target, std::vector<int> array)
{
	if (target == 0)
		return {};
	if (target < 0)
		return { -1};
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
	return { -1};
}

//time - O(n*m^2)   space- O(m^2)
std::vector<int> howSumUsingMemo(int target, std::vector<int> array)
{
	if (target == 0)
		return {};
	if (target < 0)
		return { -1};
	if (memo.find(target) != memo.end())
		return memo[target];
	for (int i = 0; i < array.size(); i++)
	{
		int rem = target - array[i];
		memo[target] = howSumUsingMemo(rem, array);
		if (memo[target].size() == 0 || memo[target][0] != -1)
		{
			memo[target].push_back(array[i]);
			return (memo[target]);
		}
	}
	return memo[target];
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


#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <unordered_map>
using namespace std;
void reverse (int *arr, int s, int t, unordered_map < int, int >&map)
{
	int i, j, temp;
	for (i = s, j = 0; i <= (t - s) / 2 + s; i++, j++)
	{
		temp = arr[i];
		arr[i] = arr[t - j];
		arr[t - j] = temp;
		map[arr[i]] = i + 1;
		map[arr[t - j]] = t - j + 1;
	}
}

int ReverSort (int *arr, int size, unordered_map < int, int >&map)
{
	int result = 0;
	for (int m = 0; m < size - 1; m++)
	{
		int i = m + 1;
		int j = map[i];
		result += (j - i + 1);
		reverse (arr, i - 1, j - 1, map);
	}
	return result;
}

int ReverSortEngg (int cost, int size, int *arr)
{
	int result = INT_MIN;
	int maxCost = 0;
	int large = size;
	unordered_map < int, int > map;
	for (int i = 0; i < size / 2; i++)
	{
		if (i % 2 == 0)
		{
			arr[i] = large;
			arr[large] = i + 1;
			map[arr[i]] = i + 1;
			map[arr[large]] = large + 1;
			large--;
		}
	}
	maxCost = ReverSort (arr, size, map);
	if (cost < size - 1 or cost > maxCost)
	{
		return result;
	}
	else
		return INT_MAX;
}

int main ()
{
	int testCase;
	cin >> testCase;
	int iteration = 0;
	while (iteration < testCase)
	{
		int size, cost;
		cin >> size;
		cin >> cost;
		int lis[size];
		int res = ReverSortEngg (cost, size, lis);
		if (res == INT_MIN)
			cout << "Case #" << iteration + 1 << ": " << "IMPOSSIBLE" << endl;
		else {
			cout << "Case #" << iteration + 1 << ": ";
			for (int x : lis)
				cout << x << " ";
			cout << endl;
		}
		iteration++;
	}
	return 0;
}


https://www.geeksforgeeks.org/heaps-algorithm-for-generating-permutations/


1, 2, 3, 4---------- -3
1, 2, 4, 3---------- -4
1, 4, 2, 3---------- -5
4, 1, 2, 3---------- -6
4, 1, 3, 2---------- -6
4, 3, 1, 2---------- -8
4, 3, 2, 1---------- -6
4, 2, 3, 1---------- -7
4, 2, 1, 3---------- -6
4, 3, 2, 1---------- -6


1 2 3 4 ---- -3 (n - 1)
1 2 4 3 ---- -4
1 4 3 2 ---- -5

4 3 2 1 ---- -6 (n - 1) + (n - 1) // 1 fixed at last
3 4 2 1 ---- -7

2 3 4 1 ---- -8 (n - 1) + (n - 1) + (n - 2) // 2 fixed at opposite extreme

2 4 3 1 ---- -9  (n - 1) + (n - 1) + (n - 2) +(n - 3) // 3 fixed at other oppostie extreme

while (count)
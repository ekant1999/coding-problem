#include<bits/stdc++.h>
using namespace std;

unordered_map<int, bool> memo;

bool canSum(int array[], int n, int target)
{
	if (target == 0)
		return true;
	if (target < 0)
		return false;
	if (memo.find(target) != memo.end())
		return true;
	for (int i = 0; i < n; i++)
	{
		int rem = target - array[i];
		if (canSum(array, n, rem) == true) {
			memo[rem] = true;
			return true;
		}
	}
	memo[target] = false;
	return false;
}



int main() {

#ifndef ONLINE_JUDGE
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
#endif

	int arr[] = {0, 1, 2, 3};
	int n = sizeof(arr) / sizeof(arr[0]);
	int target = 6;
	cout << canSum(arr, n, target);
	return 0;
}

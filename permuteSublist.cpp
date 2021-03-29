#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
void permuteSublist(std::vector<int> &inp, std::vector<int>  &res) {
	if (inp.empty())
	{
		for (int x : res)
			cout << x << "  ";
		cout << endl;
	}
	else {
		res.push_back(inp[0]);
		inp.erase (inp.begin(), inp.begin() + 1);
		permuteSublist(inp, res);
		inp.erase (inp.begin(), inp.begin() + 1);
		permuteSublist(inp, res);
	}
}


int main ()
{
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	//freopen("output.txt", "w", stdout);
// #endif

	int testCase;
	cin >> testCase;
	int iteration = 0;
	while (iteration != testCase)
	{
		int size;
		cin >> size;
		std::vector<int> arr(size);
		for (int i = 0; i < size; i++)
		{
			int val;
			cin >> val;
			arr[i] = val;
		}
		std::vector<int> res;
		cout << "Case #" << iteration + 1 << ": " << endl;
		permuteSublist(arr, res);
		iteration++;
	}
	return 0;
}

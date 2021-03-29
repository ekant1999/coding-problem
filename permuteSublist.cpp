function(list) = 
[], [1], [2], [3],
[1, 2], [2, 1], [1, 3], [3,1], [2, 3], [3,2],
[1, 2, 3], [1, 3, 2], [2, 1, 3], [2, 3, 1], [3, 1, 2], [3, 2, 1]

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
	else 
	{
	    int num= inp[0];
		res.push_back(inp[0]);
		inp.erase (inp.begin(), inp.begin() + 1);
		permuteSublist(inp, res);
		res.pop_back();
		permuteSublist(inp, res);
		inp.insert(inp.begin(), num);
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

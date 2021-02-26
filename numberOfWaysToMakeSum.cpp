#include <vector>
using namespace std;

int numberOfWaysToMakeSum(int n, vector<int> coins) {
	vector<int> ways(n+1,0);
	ways[0]=1;
	for(int i : coins) {
		for(int j = 1; j <= n; j++) {
			if(j >= i) {
				ways[j] += ways[j-i];
			}
		}
	}
  return ways[n];
}

int main() {
	vector<int> arr = {1, 2, 3};
	int target = 6;
	cout << numberOfWaysToMakeSum(target, arr);
	return 0;
}

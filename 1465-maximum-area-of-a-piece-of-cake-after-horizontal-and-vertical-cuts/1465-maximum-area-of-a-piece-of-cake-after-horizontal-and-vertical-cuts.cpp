class Solution {
public:
	int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts)
	{
		sort(horizontalCuts.begin(), horizontalCuts.end());
		sort(verticalCuts.begin(), verticalCuts.end());

		horizontalCuts.push_back(h);
		verticalCuts.push_back(w);

		long long int x = horizontalCuts[0];
		long long int y = verticalCuts[0];

		for (int i = 1 ; i < horizontalCuts.size() ; i++)
		{
			if (horizontalCuts[i] - horizontalCuts[i - 1] > x)
				x = horizontalCuts[i] - horizontalCuts[i - 1];
		}

		for (int i = 1 ; i < verticalCuts.size() ; i++)
		{
			if (verticalCuts[i] - verticalCuts[i - 1] > y)
				y = verticalCuts[i] - verticalCuts[i - 1];
		}

		return (x % (1000000000 + 7) * y % (1000000000 + 7)) % (1000000000 + 7);
	}
};
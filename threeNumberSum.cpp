#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> threeNumberSumHelper(vector<int> array, int target, vector<vector<int>> result) {
  sort(array.begin(),array.end());
	for(int currentIndex=0; currentIndex<array.size()-1; currentIndex++){
		int nextIndex=currentIndex+1;
		int lastIndex=array.size()-1;
		while(nextIndex<lastIndex){
			if(array[currentIndex]+array[nextIndex]+array[lastIndex]==target)
			{
				vector<int> res;
				res.push_back(array[currentIndex]);
				res.push_back(array[nextIndex]);
				res.push_back(array[lastIndex]);
				result.push_back(res);
				nextIndex++;
				lastIndex--;
			}
			else if(array[currentIndex]+array[nextIndex]+array[lastIndex]>target)
			{
				lastIndex--;
			}
			else{
				nextIndex++;
			}
		}
	}
  return result;
}
vector<vector<int>> threeNumberSum(vector<int> array, int targetSum) {
	vector<vector<int>> result;
	return threeNumberSumHelper(array,targetSum,result);
}


int main()
{
   vector<int > array = {0, -1, 2, -3, 1};
   targetSum=0;
   vector<vector<int>> result = threeNumberSum(array, targetSum);
   //{{0, -1, 1}, {2 ,-3, 1}}
    return 0;
}

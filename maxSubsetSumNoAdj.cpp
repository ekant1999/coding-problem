#include <vector>
using namespace std;
int maxSubsetSumNoAdjacent(vector<int> array) {
	int maxSum=0;
	if (array.size()==0)
		return 0;
	else if(array.size()==1)
		return array[0];
	else if(array.size()==2)
		return max(array[0],array[1]);
	else if(array.size()>2 and array.size()<6)
	{
		 int first=0;
		while(first<array.size()-2){
		int second= first+2;
		for(;second<array.size();second++)
		{
			int currentMax=array[first]+array[second];
			maxSum=max(currentMax,maxSum);
		}
		first++;
	}
		for(int i=0; i< array.size();i++){
			maxSum=max(array[i],maxSum);
		}
	}
	else{
	 int first=0;
	while(first<array.size()-2){
		int second= first+2;
		for(;second<array.size();second++){
		int currentMax=array[first]+array[second];
		int third= second+2;
		for(;third<array.size();third++)
		{
		currentMax+=array[third];
		maxSum=max(currentMax,maxSum);
		currentMax-=array[third];
		}
		}
		first++;
	}		
	}
  return maxSum;
}

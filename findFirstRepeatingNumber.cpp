
#include <vector>
using namespace std;
/*
array= {1,2,5,2,3,5,1}
first repeating number = 2;
*/
int firstDuplicateValue(vector<int> array) { 
	for(auto val : array)
	{
		int absVal= abs(val);
		if(array[absVal-1]<0)
			return absVal;
		else
			array[absVal-1] *=-1;
	}
	return -1; 
}

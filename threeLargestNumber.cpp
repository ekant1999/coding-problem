
#include <vector>
using namespace std;
// in this function we keep track of three variables max1,max2,max3
//here we compare first the i th element with the max3 if it is greater then we make this number as largest
// and accordingly we will reassign the max2 and max1.
// similarly we will do this for max2 and max1
vector<int> findThreeLargestNumbers(vector<int> array) {
	int max1,max2,max3;
	max1=INT_MIN;
	max2=INT_MIN;
	max3=INT_MIN;
	vector<int> resArr;
	for(int i=0;i<array.size();i++)
	{
	if(array[i]>max3){
		max1=max2;
		max2=max3;
		max3=array[i];
	}
		else if(array[i]>max2)
		{
			max1=max2;
			max2=array[i];
		}
		else if(array[i]>max1)
		{
			max1=array[i];
		}
	}
	resArr.push_back(max1);
	resArr.push_back(max2);
	resArr.push_back(max3);
	
  return resArr;
}

int main()
{
    vector<int> inpVector={55,43,11,34,-4,10,23,3};
    vector<int> res= findThreeLargestNumbers(inpVector);
    cout<<res[0]<<" "<<res[1]<< " "<< res[2];
}

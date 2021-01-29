#include <vector>
using namespace std;

int binarySearchHelper(vector<int> arr,int start, int end, int target)
{
if(start>end)
		return -1;
int mid= start+(end-start)/2;
if(target==arr[mid])
	return mid;
if(arr[mid]>=target)
	return(binarySearchHelper(arr,start,mid-1,target));
else
	return(binarySearchHelper(arr,mid+1, end,target));
}
int binarySearch(vector<int> array, int target) {
 return binarySearchHelper(array,0,array.size()-1,target);
}
using namespace std;

int main()
{
    vector<int> arr= {0, 1, 21, 33, 45, 45, 61, 71, 72, 73};
    cout<< binarySearch(arr,33);
    return 0;
}
//assert(binarySearch({0, 1,2,3,4,5,9,15 ,21, 45, 45, 61, 71, 72, 73}, 15) == 8);

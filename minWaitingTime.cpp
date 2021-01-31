
#include <iostream>
#include<vector>
using namespace std;

void Swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition(vector<int> &arr, int start, int end)
{
    int partitionIndex = start;
    int pivotElement = arr[end];
    int i = start;
    while (i < end)
    {
        if (arr[i] <= pivotElement)
        {
            Swap(&arr[i], &arr[partitionIndex]);
            partitionIndex++;
        }
        i++;
    }
    Swap(&arr[partitionIndex], &arr[end]);
    return partitionIndex;
}
void quickSort(vector<int> &arr, int start, int end)
{
    if (start < end)
    {
        int pIndex = partition(arr, start, end);
        quickSort(arr, start, pIndex-1);
        quickSort(arr, pIndex + 1, end);
    }
}

// time- O(logN)  space- )(1)
// in this function we sort the given array using quick sort which will take log(N)
// as the array is in sorted order we can find minimum wait time to finish task.
int minimumWaitingTime(vector<int> queries) {
  quickSort(queries,0,queries.size()-1);
	int sum=0;
	int currentSum=0;
		for(int i=0; i<queries.size(); i++)
	{
		cout<<queries[i]<< "   "; 
	}
	for(int i=0; i<queries.size(); i++)
	{
		int tem=queries[i]+currentSum;
		currentSum+=queries[i];
		queries[i]=tem;
	}
	for(int i=0; i<queries.size()-1; i++)
	{
		sum+=queries[i];
	}
	return sum;
}

int main()
{
    vector<int> queries={3, 2, 1, 2, 6};
    cout<<minimumWaitingTime(queries);
    return 0;
}

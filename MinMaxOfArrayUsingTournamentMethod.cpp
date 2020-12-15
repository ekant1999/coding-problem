#include <iostream>
using namespace std;

struct Pair
{
    int min;
    int max;
};
/*In this function we will recursively divide the array until there are two or one element in new array 
Then will will compare the two element and return respective min and max value
If the new array has only one element the we will return that element as min and max
*/
struct Pair Min_Max_Finder(int A[], int start, int end)
{
    int min = INT32_MAX, max = INT32_MIN;
    struct Pair minmaxpair;
    
/* base case:1 the function will return when both index are referring to the same position. eg arr[0]*/
    
    if (start == end)
    {
        minmaxpair.max = A[start];
        minmaxpair.min = A[start];
        return minmaxpair;
    }
    /*base case:2 when there are only two element that we will comapre the two elements for e.g. arr[0] and arr[1]*/
    else if (start + 1 == end)
    {
        if (A[start] > A[end])
        {
            minmaxpair.max = A[start];
            minmaxpair.min = A[end];
        }
        else
        {
            minmaxpair.max = A[end];
            minmaxpair.min = A[start];
        }
        return minmaxpair;
    }
    int mid = start + (end - start) / 2;
    struct Pair leftminmaxpair = Min_Max_Finder(A, start, mid);
    struct Pair rightminmaxpair = Min_Max_Finder(A, mid + 1, end);

    if (leftminmaxpair.min < rightminmaxpair.min)
        minmaxpair.min = leftminmaxpair.min;
    else
        minmaxpair.min = rightminmaxpair.min;

    if (leftminmaxpair.max > rightminmaxpair.max)
        minmaxpair.max = leftminmaxpair.max;
    else
        minmaxpair.max = rightminmaxpair.max;

    return minmaxpair;
}
int main()
{
    int A[] = {1, 4, 45, 6, -50, 10, 2};
    int n = sizeof(A) / sizeof(A[0]);
    struct Pair minmax = Min_Max_Finder(A, 0,n - 1);

    cout << "Min element is "<< minmax.min << endl;
    cout << "Max element is "<< minmax.max << endl;
    return 0;
}

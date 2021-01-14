#include <iostream>
#include <vector>
using namespace std;

vector<int> merge(int arr1[], int arr2[], int m, int n)
{
    vector<int> result;
    int i = 0, j = 0;
    while (i<=m && j<=n)
    {
        if (arr1[i] > arr2[j])
        {
            result.push_back(arr2[j++]);
        }
        else
        {
            result.push_back(arr1[i++]);
        }
        
    }
    for (; i < m; i++)
    {
        result.push_back(arr1[i]);
    }
    for (; j < n; j++)
    {
        result.push_back(arr2[j]);
    }
    return (result);
}
void mergeSort(int arr[], int l, int r)
{

}

int main()
{
    int array1[5] = {0, 3, 5, 9, 17}, array2[3]={ 6, 8, 2};
    int size = sizeof(array1)/sizeof(array1[0]);
//mergeSort(arrat, 0, size - 1);
vector <int> res = merge(array1,array2,5,3);

for (int i =0; i< res.size(); i++)
    cout<< res[i] << " ";
return 0;

}

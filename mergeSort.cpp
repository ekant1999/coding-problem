#include <iostream>

using namespace std;

void merge(int arr[], int low, int mid, int high)
{
    int tempArray[high - low + 1], i, j, m = 0;
    j = mid + 1;
    i=low;
    while (i <= mid && j <= high)
    {
        if (arr[i] > arr[j])
            tempArray[m++] = arr[j++];
        else
            tempArray[m++] = arr[i++];
    }
    for (; i <= mid; i++)
        tempArray[m++] = arr[i];
    for (; j <= high; j++)
        tempArray[m++] = arr[j];

    for (int n = low; n <= high; n++)
    {
        arr[n] = tempArray[n - low];
    }
}

void mergeSort(int arr[], int low, int high)
{
    int mid;
    if (high > low)
    {
        mid = (high + low) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}

int main()
{
    int  array[5] = {0, 199, 5, 1, 17};
    int size = sizeof(array) / sizeof(array[0]);
    mergeSort(array, 0, 4);
    //merge(array,0,9);
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";
    return 0;
}

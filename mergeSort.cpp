#include <iostream>

using namespace std;

void Merge(int a[], int low, int high, int mid)
{
    int i, j, k, temp[high - low + 1];
    i = low;
    k = 0;
    j = mid + 1;

    while (i <= mid && j <= high)
    {
        if (a[i] < a[j])
            temp[k++] = a[i++];
        else
            temp[k++] = a[j++];
    }

    while (i <= mid)
        temp[k++] = a[i++];

    while (j <= high)
        temp[k++] = a[j++];

    for (i = low; i <= high; i++)
        a[i] = temp[i - low];
}

void MergeSort(int a[], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        MergeSort(a, low, mid);
        MergeSort(a, mid + 1, high);
        Merge(a, low, high, mid);
    }
}

int main()
{
    int arr[5] = {0, 199, 5, 1, 17}, array2[3] = {6, 8, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    MergeSort(arr, 0, size - 1);
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    return 0;
}

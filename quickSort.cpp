#include <iostream>

using namespace std;

void Swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition(int arr[], int start, int end)
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
void quickSort(int arr[], int start, int end)
{
    if (start < end)
    {
        int pIndex = partition(arr, start, end);
        quickSort(arr, start, pIndex-1);
        quickSort(arr, pIndex + 1, end);
    }
}
int main()
{
    int arr[9] = {0, 199, 5, 1, 17, -1 , 21, 65, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, size - 1);
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    return 0;
}

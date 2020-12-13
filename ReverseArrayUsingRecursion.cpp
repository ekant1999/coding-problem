
#include <iostream>
using namespace std;

void reverseArray(int arr[], int start, int end)
{
    if (start >= end)
        return;

    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    reverseArray(arr, start + 1, end - 1);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};

    reverseArray(arr, 0, 5);
    for (int i = 0; i < 6; i++)
        cout << arr[i] << " ";

    return 0;
}

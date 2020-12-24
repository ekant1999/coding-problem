#include <iostream>
using namespace std;

void swap(int &n1, int &n2)
{
    int temp = n1;
    n1 = n2;
    n2 = temp;
}

void DutchAlgo(int arr[], int size)
{
    int low = 0, mid = 0, high = size - 1;

    while (mid <= high)
    {
        switch (arr[mid])
        {
        case 0:
            swap(arr[low], arr[mid]);
            low++;
            mid++;
            break;
        case 1:
            mid++;
            break;
        case 2:
            swap(arr[high], arr[mid]);
            high--;
            break;
        default:
            break;
        }
    }
}

int main()
{
    int arr[10] = {0, 1, 2, 1, 1, 1, 0, 0, 0, 2};
    DutchAlgo(arr, 10);
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

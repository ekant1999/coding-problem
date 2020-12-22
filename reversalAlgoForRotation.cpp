#include <iostream>

using namespace std;
/*
arr[] = [4,5,6,7,1,2,3], d =4 and n = 7
A = [4,5,6,7] and B = [1,2,3]
Reverse A= [7,6,5,4,1,2,3]
Reverse B = [7,6,5,4,3,2,1]
Reverse all, we get (ArBr)r = [1,2,3,4,5,6,7]
*/
void reverseArray(int arr[], int start, int end)
{
    if (start >= end)
        return;
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    reverseArray(arr, start + 1, end - 1);
}

void arrayrotation(int arr[], int size, int d)
{
    reverseArray(arr,0,d-1);
    reverseArray(arr,d,size-1);
    reverseArray(arr,0,size-1);
}

int main()
{
    int arr[12]={10,11,12,1,2,3,4,5,6,7,8,9};
    int size= sizeof(arr)/sizeof(arr[0]);
    int d=3;
    arrayrotation(arr,size,d);
    for(int i=0; i<size; i++)
    {
        cout<< arr[i]<< " ";
    }

    return 0;
}

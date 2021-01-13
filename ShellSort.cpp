#include <iostream>

using namespace std;

// using gap as size/2;

void ShellSort(int arr[], int size)
{
    int gap = size / 2;
    int j = size / 2;
    
    while (gap >= 1)
    {
        if (gap == 1)
        {
            for (int i = 1; i < size; i++)
            {
                int valueToInsert = arr[i];
                int insertAtPos = i - 1;
                while (insertAtPos >= 0 && arr[insertAtPos] > valueToInsert)
                {
                    arr[insertAtPos + 1] = arr[insertAtPos];
                    insertAtPos = insertAtPos - 1;
                }
                arr[insertAtPos + 1] = valueToInsert;
            }
        }
        else
        {
            int j = gap;
            int i = 0;
            while (i < j && j < size)
            {
                if (arr[i] > arr[j])
                {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
                j++;
                i++;
            }
        }

        gap /= 2;
    }
}

//using Knuths sequence.

void ShellSortUsingKnuthSeq (int arr[], int size)
{
  int h = 1;
  while (h < size / 3)
    {
      h = 3 * h + 1;
    }
  while (h > 0)
    {
      for (int i = h; i < size; i += h)
	{
	  for (int n = i; n > 0 && arr[n] < arr[n - h]; n -= h)
	    {
	      int number = arr[n];
	      arr[n] = arr[n - h];
	      arr[n - h] = number;
	    }
	}
      h = --h / 3;
    }
}

int main()
{
    int arr[10] = {8, 2, 4, 1, 3, 9, 0, 5, 6, 7};

    ShellSort(arr, 10);

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << "  ";
    }
    return 0;
}

//0  1  2  3  4  5  6  7  8  9


#include <iostream>

using namespace std;

void seprateNegNum (int arr[], int size)
{
  int negPointer = 0;
  for (int pointer = 0; pointer < size; pointer++)
    {
      if (arr[pointer] < 0)
	{
	  int temp = arr[pointer];
	  arr[pointer] = arr[negPointer];
	  arr[negPointer] = temp;
	  negPointer++;
	}
    }
}

int main ()
{
  int arr[10] = { -1, 3, -9, 5, 6, -4, -5, -6, 7, -10 };

  seprateNegNum (arr, 10);

  for (int i = 0; i < 10; i++)
      cout << arr[i] << " ";

  return 0;
}

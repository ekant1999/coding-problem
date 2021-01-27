
#include <iostream>

using namespace std;
//In this function we keep track of the first positive number and sawp it with ouccured negative number and then we again increment both the pointer and aur resultant array will have all negative number in the left and positive on the right.
void seprateNegNum (int arr[], int size)
{
  int negPointer = 0;
  for (int pointer = 0; pointer < size; pointer++)
    {
      if (arr[pointer] < 0)
	{
	  int temp = arr[pointer];
	  arr[pointer] = arr[negPointer];
	  arr[negPointer++] = temp;}
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

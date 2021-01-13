#include<iostream>

using namespace std;

void InsertionSort(int arr[], int size)
{
int valueToInsert, insertAtPos;

for (int i=1; i<size; i++)
{
  valueToInsert= arr[i];
  insertAtPos= i-1;
  	while (insertAtPos >= 0 && arr[insertAtPos] > valueToInsert) 
		{ 
			arr[insertAtPos + 1] = arr[insertAtPos]; 
			insertAtPos = insertAtPos - 1; 
		} 
		arr[insertAtPos + 1] = valueToInsert;
}
}

int main()
{
int arr[10]={8,2,4,1,3,9,0,5,6,7};

InsertionSort(arr, 10);

for (int i=0; i< 10; i++)
{
cout<< arr[i] << "  ";
}
return 0;
}
//0  1  2  3  4  5  6  7  8  9  

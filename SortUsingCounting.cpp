#include <iostream>
using namespace std;

void sortArray(int* arr, int n)
{
	int C0 = 0, C1 = 0, C2 = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] == 0)
			C0++;
		if (arr[i] == 1)
			C1++;
		if (arr[i] == 2)
			C2++;
	}
	for (int i = 0; i < C0; i++) 
		arr[i] = 0;
	for (int i = C0; i < (C0 + C1); i++) 
		arr[i] = 1;

	for (int i = (C0 + C1); i < n; i++) 
		arr[i] = 2;
	
	return;
}

void printArray(int* arr, int n)
{
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main()
{
	int arr[] = { 0, 1, 1, 2, 1, 2, 0, 0, 0, 1 };
	int n = sizeof(arr) / sizeof(arr[0]);
	sortArray(arr, n);
	printArray(arr, n);
	return 0;
}

#include <bits/stdc++.h> 
using namespace std; 

/*In this function we are comparing element of the two array
and smaller element is add to union list and index is incremented 
at last we will get the union of the two sorted array.

this program will only work for sorted array we are comparing the value of the specific index
and adding it to the union array.

IF we want to take union of two unsorted array then array need to be sorted fisrt which will take
mlogm + nlogn
and the for union it will take O(m+n) time.
*/
int printUnion(int arr1[], int arr2[], int m, int n) 
{ 
	int i = 0, j = 0; 
	vector<int> u1;
	while (i < m && j < n) { 
		if (arr1[i] < arr2[j]) 
			u1.push_back(arr1[i++]);

		else if (arr2[j] < arr1[i]) 
			u1.push_back(arr2[j++]);

		else { 
			u1.push_back(arr2[j++]);
			i++; 
		} 
	} 
	
	while (i < m) 
		u1.push_back(arr1[i++]);

	while (j < n) 
	u1.push_back(arr2[j++]);
	
	return(u1.size());
} 


int main() 
{ 
	int arr1[] = { 1, 2, 4, 5, 6 }; 
	int arr2[] = { 2, 3, 5, 7 }; 

	int m = sizeof(arr1) / sizeof(arr1[0]); 
	int n = sizeof(arr2) / sizeof(arr2[0]); 
	
	int res= printUnion(arr1, arr2, m, n); 
	cout<< res<< endl;

	return 0; 
} 

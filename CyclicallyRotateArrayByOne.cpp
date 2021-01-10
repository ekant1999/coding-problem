#include <iostream>

using namespace std;

void CyclicallyRotateArrayByOne(int arr[], int size) {
   int temp = arr[size - 1];
   for (int i = size - 2; i >= 0; i--) {
      arr[i + 1] = arr[i];
   }
   arr[0] = temp;
}
int main() {
   int cases;
   cin >> cases;
   while (cases--) {
      int size;
      cin >> size;
      int arr[size];
      for (int i = 0; i < size; i++) {
         cin >> arr[i];
      }
      CyclicallyRotateArrayByOne(arr, size);
      for (int i = 0; i < size; i++) {
         cout << arr[i] << " ";
      }
      cout << endl;
   }
   return 0;
}
/*
Input:
2
5
1 2 3 4 5
8
9 8 7 6 4 2 1 3
Output:
5 1 2 3 4
3 9 8 7 6 4 2 1
*/

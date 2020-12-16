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

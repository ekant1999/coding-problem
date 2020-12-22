#include <iostream>

using namespace std;

//In this method we rotate first element of array and we rotate it one by one until d times(num).

void RotateArrayByNumber(int arr[], int size, int num) {
    if (num==0)
        return;
   int temp = arr[0];
   for (int i = 1; i < size; i++) 
   {
      arr[i-1] = arr[i];
   }
   arr[size-1] = temp;
   
   RotateArrayByNumber(arr,size,num-1);
}
}
int main() {
   int cases;
   cin >> cases;
   while (cases--) {
      int size;
      cin >> size;
      int arr[size],num;
      for (int i = 0; i < size; i++) {
         cin >> arr[i];
      }
      cout<<"By how much you want to rotate a array"<< endl;
      
        cin>> num;
        
     RotateArrayByNumber(arr,size,num);
      for (int i = 0; i < size; i++) {
         cout << arr[i] << " ";
      }
      cout << endl;
   }
   return 0;
}

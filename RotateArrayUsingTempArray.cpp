#include <iostream>

using namespace std;

void Rotate(int arr[], int size, int num)
{
    int array[num];
    for (int i=0; i<num; i++)
        array[i]=arr[i];
        
    for(int i=0; i< size; i++)
    {
        if((num+1)<size)
        arr[i] = arr[num+i];
    }
    for(int i=0; i< num; i++)
        arr[num+i]= array[i];
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
        
     Rotate(arr,size,num);
      for (int i = 0; i < size; i++)
         cout << arr[i] << " ";
      cout << endl;
   }
   return 0;
}

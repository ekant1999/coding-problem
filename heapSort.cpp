#include <iostream>
#include <vector>

using namespace std;
void heapSort(int arr[], int size)
{

}

int main()
{
int arr[10]={12,2,3,45,-10,23,0,9,23,77};
int size= sizeof(arr)/sizeof(arr[0]);
heapSort(arr,size);

for(int i=0; i<size; i++)
{
  cout<< arr[i]<< " ";
}
  return 0;
}

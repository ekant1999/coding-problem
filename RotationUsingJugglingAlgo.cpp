#include <iostream>

using namespace std;
int gcd(int a, int b)
{
	if (b == 0)
		return a;
	return gcd(b, a % b); 
	
}
/*
similar to the rotation by single element. we shift the elements in sets.
the total number of sets are equal to the GCD(d,size)
this is algorithm take O(n) time and O(1) space.
*/
void arrayrotation(int arr[], int size, int d)
{
    int gcd1= gcd(size,d);
    for(int i=0; i< gcd1; i++)
    {
        int j= i;
        int temp= arr[i];
        while(i!=((j+d)%size))
        {
            arr[j]= arr[(j+d)%size];
            j= (j+d)%size;
        }
        arr[j]=temp;
    }
}

int main()
{
    int arr[12]={10,11,12,1,2,3,4,5,6,7,8,9};
    int size= sizeof(arr)/sizeof(arr[0]);
    int d=3;
    arrayrotation(arr,size,d);
    for(int i=0; i<size; i++)
    {
        cout<< arr[i]<< " ";
    }

    return 0;
}

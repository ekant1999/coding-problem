#include<iostream>

void reverseArray(int array[], int length)
{
    int i=0;
    int len=length;
    while(i!=length/2)
    {
        int temp;
        temp=array[i];
        array[i]=array[len-1];
        array[len-1]=temp;
        i++;
        len--;
    }
}
int main()
{
int array[5]={1,2,3,4,5};
int len= sizeof(array)/sizeof(array[0]);
reverseArray(array, len);
for(int i=0; i<len; i++)
{
    std::cout<< array[i] << " ";
}
    return 0;
}

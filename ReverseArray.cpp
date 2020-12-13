#include<iostream>

void reverseArray(int array[], int length)
{
    int i=0;
    while(i!=length)
    {
        int temp;
        temp=array[i];
        array[i]=array[length];
        array[length]=temp;
        i++;
        length--;
    }
}
int main()
{
int array[10]={1,2,3,4,5,6,7,8,9,10};
int len= sizeof(array)/sizeof(array[0]);
reverseArray(array, len-1);
for(int i=0; i<len; i++)
{
    std::cout<< array[i];
}
    return 0;
}

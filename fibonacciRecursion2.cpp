
#include <iostream>
using namespace std;


int fibonacci(int num)
{
    if(num==1||num==2)
    {
        return num;
    }
     return(fibonacci(num-1)+fibonacci(num-2));
}
int main()
{
    int num;
    cout<<"Enter The Number Upto Which You Want The Fibbonaci Series To Be Printed:\n";
    cin>>num;
    int i=1;
    while(i<num)
    {
        cout<<" "<<fibonacci(i);
        i++;
    }
    return 0;
}

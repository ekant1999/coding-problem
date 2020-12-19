
#include <iostream>

using namespace std;
// In this fuction the number n is add while function returning and not during the fucntion calling.
int func(int n)
{
    if(n>0)
    {
        x++;
        return (func(n-1)+n);
    }
    return 0;
}
/*
func(5)= (func(4)+5)+(func(3)+4)+(func(2)+3)+(func(1)+2)+(func(0)+1);
*/
int main()
{
    int n=5;
    cout<<func(n);

    return 0;
}

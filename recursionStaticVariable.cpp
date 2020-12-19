
#include <iostream>

using namespace std;
/*
The value x will be added while returning the function so x will have only one copy and will be incremented in each function call.
While returning as all the function refer to same copy of variable. It will add the final value of the x in each reursive returning.
*/

int func(int n)
{   static int x;
    if(n>0)
    {
        x++;
        return (func(n-1)+x);
    }
    return 0;
}
/*
func(5)= (func(4)+5)=25
func(4)= (func(3)+5);
func(3)=(func(2)+5);
funct(2)=(func(1)+5);
func(1)=(func(0)+5);
func(0)=0;
*/
int main()
{
    int n=5;
    cout<<func(n);

    return 0;
}

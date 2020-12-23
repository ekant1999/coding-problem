
#include <iostream>
#include <vector>
using namespace std;

void towerOfHanoi(int num,string initial, string target,string auxilary)
{
    if(num==1)
    {
        cout<< "move disk 1 from tower " << initial << " to tower "<< target<<endl;
        return;
    }
    towerOfHanoi(num-1,initial,auxilary,target);
    cout<< "move disk " << num << " from tower " << initial << " to tower "<< target<<endl;
    towerOfHanoi(num-1,auxilary,target,initial);
}
int main()
{
    towerOfHanoi(3,"A","B","C");

    return 0;
}

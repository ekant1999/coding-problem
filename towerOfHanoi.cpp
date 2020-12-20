
#include <iostream>
#include <vector>
using namespace std;

void towerOfHanoi(int num,string initial, string target,string auxilary)
{
    if(num==1)
    {
        cout<< "move disk 1 from tower" << initial << "to tower"<< target;
        return;
    }
    towerOfHanoi(num-1,initial,auxilary,target);
    cout<< "move disk" << num << "from tower" << initial << "to tower"<< target;
    towerOfHanoi(num-1,auxilary,target,initial);
}
int main()
{
    return 0;
    towerOfHanoi(4,"initial","target","auxilary");
}

#include <iostream>
#include <vector>
using namespace std;

int co=0;
void generateDiceRoll(int num, int sumSoFar, vector<int> result, int desiredOp)
{
    if (num == 0) {
        co++;
        for (auto j : result)
            std::cout << j << ' ';
        std::cout << std::endl;
        return;
    }
    for (int i = 1; i < 7; i++) {
        if(sumSoFar+i+1*(num-1)<= desiredOp and sumSoFar+i+6*(num-1)>=desiredOp){
        result.push_back(i);
        generateDiceRoll(num - 1, sumSoFar+i, result, desiredOp);
        result.pop_back();
        }
    }
}   
int main()
{    generateDiceRoll(4,0,{},9);
cout<< co;
    return 0;
}

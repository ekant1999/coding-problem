#include <iostream>
#include <vector>
using namespace std;

void generateDiceRoll(int num, std::vector<string> &output, string result)
{
    if(num==0){
        output.push_back(result);
        return;
    }
    for(int i=1; i<7; i++){
    if(num>1)
    generateDiceRoll(num-1,output,result + to_string(i) +", ");
    else
    generateDiceRoll(num-1,output,result + to_string(i));
    
    }
}
int main()
{
    std::vector<string> res;
    generateDiceRoll(2,res,"");
    for(auto i: res)
    std::cout << i << std::endl;
    return 0;
}

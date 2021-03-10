
#include <iostream>
#include <vector>
using namespace std;

//Using the backtracking we are creating all type of sets we are chosing one case exploring it and then unchosing it and then
//re-exploring the second case and we do this until entire pattern is genrated or entire permutation of the set is created.

void generateDiceRoll(int num, std::vector<vector<int> >& output,
    vector<int> result)
{
    if (num == 0) {
        output.push_back(result);
        return;
    }
    for (int i = 1; i < 7; i++) {
        result.push_back(i);
        generateDiceRoll(num - 1, output, result);
        result.pop_back();
    }
}
int main()
{
    std::vector<vector<int> > res;
    generateDiceRoll(2, res, {});
    for (auto i : res) {
        for (auto j : i)
            std::cout << j << ' ';
        std::cout << std::endl;
    }
    return 0;
}





















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

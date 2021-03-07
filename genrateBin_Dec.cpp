
#include <iostream>
#include <vector>
#include<string>
using namespace std;
void genrateBin(int num, std::vector<string> &output, string res)
{
    if(num==0){
        output.push_back(res);
        return;
    }
    genrateBin(num-1,output,res+'0');
    genrateBin(num-1,output,res+'1');
}
void genrateDec(int num, std::vector<string> &output, string res)
{
    if(num==0){
        output.push_back(res);
        return;
    }
    for(int i=0; i<10; i++)
    genrateDec(num-1,output,res+to_string(i));
}
int main()
{
    int num=5;
    vector<string> res;
    genrateBin(num,res,"");
    for(auto i : res)
    {
        std::cout << i << std::endl;
    }
    vector<string> res1;
    genrateDec(5,res1,"");
    for(auto i : res1)
    {
        std::cout << i << std::endl;
    }
    return 0;
}

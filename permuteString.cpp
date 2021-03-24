#include <bits/stdc++.h>
using namespace std;

int co=0;
void permuteAllString(string inp,string result)
{
    if (inp.empty()) {
        std::cout << result << std::endl;
        return;
    }
    for (int i = 0; i < inp.size(); i++) {
        char c= inp[i];
        result.push_back(inp[i]);
        inp.erase(i,1);
        permuteAllString(inp, result);
        inp.insert(i,1,c);
        result.pop_back();
    }
}   
int main()
{    
    string in="MARTY";
    permuteAllString(in,"");
    return 0;
}

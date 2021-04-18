
#include <bits/stdc++.h>
using namespace std;
#include <vector>
#include <string>

using namespace std;
void phoneNumberMnemonicHelper(
    vector<string> &result, string phoneNumber, unordered_map<int, vector<char>> phoneMap, string &CurrMemonic, int idx)
{
    if (idx == phoneNumber.size())
    {
        result.push_back(CurrMemonic);
        return;
    }
    int d = phoneNumber[idx] - '0';
    for (char letter : phoneMap[d])
    {
        CurrMemonic.push_back(letter);
        phoneNumberMnemonicHelper(result, phoneNumber, phoneMap, CurrMemonic, idx + 1);
        CurrMemonic.pop_back();
    }
}
vector<string> phoneNumberMnemonics(string phoneNumber) {
    unordered_map<int, vector<char>> phoneMap;

    phoneMap[0] = {'0'};
    phoneMap[1] = {'1'};
    phoneMap[2] = {'a', 'b', 'c'};
    phoneMap[3] = {'d', 'e', 'f'};
    phoneMap[4] = {'g', 'h', 'i'};
    phoneMap[5] = {'j', 'k', 'l'};
    phoneMap[6] = {'m', 'n', 'o'};
    phoneMap[7] = {'p', 'q', 'r', 's'};
    phoneMap[8] = {'t', 'u', 'v'};
    phoneMap[9] = {'w', 'x', 'y', 'z'};
    vector<string> result;
    string CurrMemonic = "";
    phoneNumberMnemonicHelper(result, phoneNumber, phoneMap, CurrMemonic, 0);
    return result;
}

int main()
{
    string in = "11123";
    vector<string> res = phoneNumberMnemonics(in);
    for (auto st : res)
    {
        std::cout << st << std::endl;
    }
    return 0;
}

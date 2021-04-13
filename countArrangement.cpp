#include<bits/stdc++.h>
using namespace std;
void generateAllPermutaionHelper(int n, std::vector<int> &v, std::vector<int> &res, int &count)
{
    if (v.empty())
    {
        count++;
        for(int i: res)
        cout<< i << "  ";
        cout<< endl;
        return;
    }
    for (int i = 0; i < v.size(); i++)
    {
        
        int num = v[i];
        res.push_back(num);
        int resSize = res.size();
        if(res[resSize-1]%(resSize)==0 or (resSize)%res[resSize-1]==0){
            v.erase(v.begin() + i);
            generateAllPermutaionHelper(n, v, res, count);
            v.insert(v.begin()+ i, num);
        }
        res.pop_back();
    }
}
void generateAllPermutaion(int n)
{
    std::vector<int> v(n);
    std::vector<int> res;
    int result = 0;
    for (int i = 0; i < n; ++i)
    {
        v[i] = i + 1;
    }
    generateAllPermutaionHelper(n, v, res, result);
    cout << result;
}
int main()
{
    int res = 5;
    generateAllPermutaion(res);
}

#include<bits/stdc++.h>
using namespace std;
int dfs(int N, int i, vector<bool>& used) {
    if (i > N) return 1;
    int sum = 0;
    for (int num = 1; num <= N; num++) {
        if (used[num]) continue;
        if (num % i != 0 && i % num != 0) continue;
        used[num] = true;
        sum += dfs(N, i + 1, used);
        used[num] = false;
    }
    return sum;
}
void generateAllPermutaion(int N)
{
    if (N < 1) cout << 0;
    vector<bool> used(N + 1, false);
    cout << dfs(N, 1, used);
}
int main()
{
    int res = 5;
    generateAllPermutaion(res);
}

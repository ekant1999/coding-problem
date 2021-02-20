int coinChange(vector<int> &denoms, int n)
{
    vector<int> NumberOfCoins(n + 1, INT_MAX);
    NumberOfCoins[0] = 0;
    int x = 0;
    for (int i : denoms)
    {
        for (int j = 0; j < NumberOfCoins.size(); j++)
        {
            if (j >= i)
            {
                if (NumberOfCoins[j - i] == INT_MAX)
                    x = NumberOfCoins[j - i];
                else
                    x = NumberOfCoins[j - i] + 1;
                NumberOfCoins[j] = min(NumberOfCoins[j], x);
            }
        }
    }
    return NumberOfCoins[n] != INT_MAX ? NumberOfCoins[n] : -1;
}

int main()
{
    cout << coinChange({438, 86, 218, 138, 358, 152, 129}, 7656);
    return 0;
}

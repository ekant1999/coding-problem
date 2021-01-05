#include <iostream>
#include <unordered_map>
using namespace std;

unordered_map<int, int> lookup_table;

int fib_mem(int n)
{
    if (n <= 2)
        return 1;
    unordered_map<int, int>::const_iterator got = lookup_table.find(n);
    if (got == lookup_table.end())
        lookup_table[n] = fib_mem(n - 1) + fib_mem(n - 2);

    return lookup_table[n];
}

int main()
{
    int n = 45;
    cout << "fibo of " << n << " is " << fib_mem(n) << endl;

    return 0;
}
//fibo of 45 is 1134903170

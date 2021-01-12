#include<iostream>
#include <string>
#include<unordered_map>
using namespace std;

unordered_map <string, int> memo;

int findTotalMoves( int m, int n)
{
  if (n == 0 || m == 0)
    return 0;
  if (n == 1 && m == 1)
    return 1;
  string key = to_string (m) + "" + to_string (n);
  unordered_map < string, int >::const_iterator got = memo.find (key);
  if (got != memo.end ())
    return memo[key];
  memo[key] = findTotalMoves (m - 1, n);
  memo[key] = findTotalMoves (m, n - 1);
  return memo[key];
}

int main ()
{
  int rows, coloumns;
  cin >> rows >> coloumns;

  cout << "total number of possible moves are " << findTotalMoves (rows,
								   coloumns)
    << endl;
  return 0;
}

#include <iostream>
using namespace std;
void printDuplicates(string s)
{
  int count[256] = {}; //total number of characters= 256
  for(int i=0; i<s.size(); i++)
    count[s[i]]++;
  for(int i=0; i<s.size(); i++)
    if(count[s[i]] > 1) 
      {
      cout<<s[i]<<"   count = "<<count[s[i]]<<endl;
      count[s[i]] = 0;
      }
}
int main()
{
  string s  = "Daily coding question";
  cout<<"Input string is "<<s<<endl;
  printDuplicates(s);
}
/*
output:-

Input string is Daily coding question
i   count = 3
    count = 2
o   count = 2
n   count = 2
*/


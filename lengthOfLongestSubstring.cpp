#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    
int lengthOfLongestSubstring(string s) {
  int slowPointer=0, fastPointer=0;
  int result=0;
  vector<int> map(256,0);
   while(fastPointer<s.size())     
        {
            map[s[fastPointer]]++;     
            
            while(map[s[fastPointer]]>1)    
            { 
                map[s[slowPointer]]--;   
                slowPointer++;         
            }
            
            result = max(result,fastPointer-slowPointer+1);    
            fastPointer++;  
        }
        return result;
    }
    
};

int main() {
  string str = "dvpqde";

  std::cout << lengthOfLongestSubstring(str) << std::endl;

  return 0;

}

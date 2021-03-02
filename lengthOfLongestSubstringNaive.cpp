class Solution {
public:
  int lengthOfLongestSubstring(string s) {

  int globalcount = 0;

  int count = 0;

  string str;

  unordered_map < char, bool > hashMap;

  int currSum = 0;

  string currStr;

  int firstPointer=0;
  
  while (count < s.size())
  {

    if (hashMap.find(s[count]) != hashMap.end())

    {

      hashMap.clear();

      if (globalcount < currSum) {

        globalcount = currSum;

        str = currStr;

      }
      string s;
      currStr=s;
      currSum=0;
      firstPointer++;
      count=firstPointer;

    } 
    else {

      currSum++;
      currStr.push_back(s[count]);

      hashMap[s[count]] = true;

      count++;

    }

  }
int max = currSum > globalcount ? currSum : globalcount;
  return max;
}
};

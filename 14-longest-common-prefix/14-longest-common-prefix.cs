public class Solution {
    public string LongestCommonPrefix(string[] strs) {
        int beginString= 0;
        int start=0;
        string result="";
        bool ismatching= true;
        if(strs.Length==1)
        {
            return strs[0];
        }
        while(ismatching && strs[0].Length!=0)
        {
          for(int i= beginString+1; i<strs.Length; i++)
        {
            if (!( strs[i].Length!=0 &&  strs[0].Length > start && strs[i].Length > start && strs[i][start]==strs[0][start]))
            {
                ismatching=false;
                break;
            }
        }
            if(ismatching)
            {
                result+=strs[0][start];
            }
            start++;
            
        }
        return result;
    }
}
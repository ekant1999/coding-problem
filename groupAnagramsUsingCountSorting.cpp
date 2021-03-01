class Solution {
private:
        string sortString(string str){
       int charExist[26] = {0};
    for (int i = 0; i < str.size(); i++) {
        charExist[str[i] - 'a']++;
    }
    string res;
    int j = 0;
    while (j < 26) {
        if (charExist[j] == 0) {
            j++;
        }
        else {
            res.push_back(j + 'a');
            charExist[j]--;
        }
    }
    return res;
}
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs){
         unordered_map<string, vector<string>> mp;
        for (string s : strs) {
            string t = sortString(s);
            mp[t].push_back(s);
        }
        vector<vector<string>> anagrams;
        for (auto p : mp) { 
            anagrams.push_back(p.second);
        }
        return anagrams;
}    
};

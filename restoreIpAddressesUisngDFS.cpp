class Solution {
public:
    vector<string> restoreIpAddresses(string s) {
        	    vector<string> result;
        dfs(result, s, 0, "", 0);
        return result;
    }
    void dfs(vector<string>& ret, string& s, int index, string res, int count) {
        if (count > 4) return;
        if (count == 4 && index >= s.length()) {
            res.pop_back();
            ret.push_back(res);
            return;
        }
        for (int i = 1; i <= 3 && index + i <= s.length(); i++) {
            string num = s.substr(index, i);
            if (num[0] == '0' && i != 1) break;
            else if (stol(num) <= 255) {
                dfs(ret, s, index + i, res + s.substr(index, i) + ".", count + 1);
            }
        }
    }
};

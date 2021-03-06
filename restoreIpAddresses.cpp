class Solution {
public:
  // time-O(1) space-O(1).
    vector<string> restoreIpAddresses(string s) {
        	vector<string> ret;
        string ans;
        for (int firstBLock=1; firstBLock<=3; firstBLock++)
        for (int secondBLock=1; secondBLock<=3; secondBLock++)
        for (int thirdBlock=1; thirdBlock<=3; thirdBlock++)
        for (int fourthBlock=1; fourthBlock<=3; fourthBlock++)
            if (firstBLock+secondBLock+thirdBlock+fourthBlock == s.length()) {
                int A = stoi(s.substr(0, firstBLock));
                int B = stoi(s.substr(firstBLock, secondBLock));
                int C = stoi(s.substr(firstBLock+secondBLock, thirdBlock));
                int D = stoi(s.substr(firstBLock+secondBLock+thirdBlock, fourthBlock));
                if (A<=255 && B<=255 && C<=255 && D<=255)
                    if ( (ans=to_string(A)+"."+to_string(B)+"."+to_string(C)+"."+to_string(D)).length() == s.length()+3)
                        ret.push_back(ans);
            }    
        
        return ret;
    }
};

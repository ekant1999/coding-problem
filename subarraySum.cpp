class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        int totalSum=0;
        int result=0;
        map[0]++;
        for(int i=0; i<nums.size(); i++)
        {
        totalSum+= nums[i];
        if(map[totalSum-k])
        {
            result+=map[totalSum-k];
        }
        map[totalSum]++;
        }
        return result;
    }
};

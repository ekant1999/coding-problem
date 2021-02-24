#include <iostream>
#include <vector>
using namespace std;

    int findPossibleMajorityElement(vector<int>& nums)
    {
        int count=1;
       int  index=0;
        for(int i=1; i<nums.size(); i++)
        {
            if(nums[index]==nums[i])
                count++;
            else
                count--;
            if(count==0){
                count=1;
                index=i;
            }
        }  
        return index;
    }
    
    bool isCandidateMajorityElement(vector<int>& nums, int candidate)
    {
        int count=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==nums[candidate])
                count++;
        }
        if(count> nums.size()/2)
            return true;
        
        return false;
        
    }
    
    int majorityElement(vector<int>& nums) {
        if(nums.size()==1)
            return nums[0];
        
        int candidate= findPossibleMajorityElement(nums);
        
        if(isCandidateMajorityElement(nums,candidate))
        {
            return nums[candidate];
        }
        return -1;
    }

int main()
{ 
    vector<int> array={3, 3, 4, 2, 4, 4, 2, 4, 4};
    cout<<majorityElement(array);
    return 0;
}

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int mj = nums.size()/2;
        map<int,int>mp;
        for(int i=0; i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        int ans;
        for(auto it:mp)
        {
            if(it.second>mj)
                ans = it.first;
        }
        return ans;
    }
};

class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(auto i:arr){
            mp[i]++;
        }
        int ans=0;
        int maxi_count=0;
        for(auto i:mp){
            if(maxi_count<i.second){
                maxi_count=i.second;
                ans=i.first;
            }
        }
        return ans;
    }
};

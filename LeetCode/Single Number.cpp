class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map <int, int> mp;
        int n = nums.size();
        for(int i = 0; i < n; i++)
            mp[nums[i]]++;
        for(auto x: mp){
            if(x.second == 1){
                return x.first;
            }
        }
        return -1;
        
        
    }
};
/*
class Solution {
public:
    int singleNumber(vector<int>& nums) { 
       unordered_map<int,int> a;
	   for(auto x: nums)
		   a[x]++;
	   for(auto z:a)
		   if(z.second==1)
			   return z.first;
	   return -1;
    }
};
*/

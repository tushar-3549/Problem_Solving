class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        string ans = "";
        map < string, int > mp;
        for(int i = 0; i < arr.size(); i++) {
            mp[arr[i]]++;
        }
        
        for(int i = 0; i < arr.size(); i++) {
            if(mp[arr[i]] == 1) 
                k--;
                
            if(k == 0)
                return arr[i];
            
        }
        return ans;
        
    }
};

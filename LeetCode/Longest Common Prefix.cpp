class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string ans = "";
        
        if(strs.size() == 0)
            return "";
        if(strs.size() == 1)
            return strs[0];
        
        int mini = INT_MAX;
        for(int i = 0; i < strs.size(); i++) {
            int sz = strs[i].size();
            mini = min(mini, sz);
            
        }
        for(int i = 0; i < mini; i++) {
            char s = strs[0][i];
            for(int j = 1; j < strs.size(); j++) {
                if(s != strs[j][i])
                    return ans;
            }
            ans += s;
        }
        return ans;
        
    }
};

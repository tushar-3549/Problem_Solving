class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int s1Length = s1.length();
        int s2Length = s2.length();
        vector<int> s1Hash(26, 0);
        vector<int> s2Hash(26, 0);

        int left = 0, right = 0;
        if (s1Length > s2Length) return false;  
        while (right < s1Length) {
            s1Hash[s1[right] - 'a']++;
            s2Hash[s2[right] - 'a']++;
            right++;
        }
        while (right <= s2Length) {  
            if (s1Hash == s2Hash) return true;
            if (right != s2Length) {
                s2Hash[s2[right] - 'a']++;
            }
            s2Hash[s2[left] - 'a']--;
            left++;
            right++;  
        }
        return false;
    }
};

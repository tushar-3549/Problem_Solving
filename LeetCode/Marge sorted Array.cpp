class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int p1 = m - 1;
        int p2 = n - 1;
        int i = n + m - 1;
        
        while(p2 >= 0) {
            
            if(p1 >= 0 && nums1[p1] > nums2[p2]) {
                nums1[i--] = nums1[p1--];
            }
            else {
                nums1[i--] = nums2[p2--];
            }
        }
        
    }
};

class Solution {
public:
    int minPairSum(vector<int>& nums) {
         // Step 1: Sort the array in ascending order
    sort(nums.begin(), nums.end());

    // Step 2: Pair up the elements
    int n = nums.size();
    int result = 0;
    for (int i = 0; i < n / 2; ++i) {
        result = max(result, nums[i] + nums[n - 1 - i]);
    }

    return result;
    }
};

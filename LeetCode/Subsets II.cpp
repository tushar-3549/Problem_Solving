
class Solution {
public:
vector < vector <int> > allsubsets;
void generate(vector <int> &subset, int i, vector <int> &nums, bool prev)
{
    if(i == nums.size())
    {
        allsubsets.push_back(subset);
        return;
    }
    // ith not consider
    generate(subset, i+1, nums, false);

    if(i > 0 && nums[i] == nums[i-1] && (!prev)) return;
    
    //ith consider
    subset.push_back(nums[i]);
    generate(subset, i+1, nums, true);

    subset.pop_back();

}
    vector<vector<int>> subsetsWithDup(vector<int>& nums){
        sort(nums.begin(), nums.end());
        vector <int> emp;
        generate(emp, 0, nums, false);
        return allsubsets;
    }
};

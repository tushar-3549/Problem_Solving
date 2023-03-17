class Solution {
public:
    vector < vector <int> > allsubsets;
void generate(vector <int> &subset, int i, vector <int> &nums)
{
    if(i == nums.size())
    {
        allsubsets.push_back(subset);
        return;
    }
    // ith not consider
    generate(subset, i+1, nums);
    //ith consider
    subset.push_back(nums[i]);
    generate(subset, i+1, nums);

    subset.pop_back();

}
    vector <vector<int>>subsets(vector<int>&nums){
        vector <int> emp;
        generate(emp, 0, nums);
        return allsubsets;
    }
};

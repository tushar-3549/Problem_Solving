class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();
        sort(intervals.begin(), intervals.end());
        int prev = 0, ans = 0;
        for(int cur = 1; cur < n; cur++){
            if(intervals[cur][0] < intervals[prev][1]){
                ans++;

                if(intervals[cur][1] <= intervals[prev][1]){
                    prev = cur;
                }
            }
            else{
                prev = cur;
            }
        }

        return ans;
    }
};

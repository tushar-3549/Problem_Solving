class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        queue<pair<int,int>>q;
        vector<vector<int>>ans(mat.size(), vector<int>(mat[0].size(), -1));

        for(int i = 0; i < mat.size(); i++){
            for(int j = 0; j < mat[0].size(); j++){
                if(mat[i][j] == 0){
                    q.push({i, j});
                    ans[i][j] = 0;
                }
            }
        }
        int m = mat.size();
        int n = mat[0].size();
        while(!q.empty()){
            int x = q.front().first;
            int y = q.front().second;

            if(checked(x+1, y, m, n) && ans[x+1][y] == -1){
                q.push({x+1, y});
                ans[x+1][y] = ans[x][y] + 1;
            }
            if(checked(x-1, y, m, n) && ans[x-1][y] == -1){
                q.push({x-1, y});
                ans[x-1][y] = ans[x][y] + 1;
            }
            if(checked(x, y+1, m, n) && ans[x][y+1] == -1){
                q.push({x, y+1});
                ans[x][y+1] = ans[x][y] + 1;
            }
            if(checked(x, y-1, m, n) && ans[x][y-1] == -1){
                q.push({x, y-1});
                ans[x][y-1] = ans[x][y] + 1;
            }
            q.pop();
        }
        return ans;
    }

    bool checked(int i, int j, int m, int n){
        if(i < 0 || j < 0 || i >= m || j >= n)
           return false;
        return true;
    }
};

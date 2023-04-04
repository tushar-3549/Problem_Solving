class Solution {
public:
    int uniquePaths(int m, int n) {
        int arr[n][m];
        //memset(arr, 0, sizeof(arr));
        for(int i = 0; i < m; i++){
            arr[n-1][i] = 1;
        }
        for(int j = 0; j < n; j++){
            arr[j][m-1] = 1;
        }
        for(int j = n-2;j >= 0; j--){
            for(int i = m-2; i >= 0; i--){
                arr[j][i] = arr[j][i+1] + arr[j+1][i];
            }
        }
        return arr[0][0];
    }
};

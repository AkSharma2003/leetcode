class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int n=grid.size();
        int m=grid[0].size();

        for(int i=0;i<k;i++){
            int prev=grid[n-1][m-1];
            for(int j=0;j<n;j++){
                for(int l=0;l<m;l++){
                    int curr=grid[j][l];
                    grid[j][l]=prev;
                    prev=curr;
                }
            }
        }
        return grid;
    }
};
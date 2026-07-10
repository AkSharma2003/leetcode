class Solution {
public:
    vector<pair<int,int>> ans;
    int ct=0;
    void cheak(vector<vector<int>>& grid, vector<vector<bool>>& v,int i,int j){
        int m=grid.size();
        int n=grid[0].size();

        if(i<0 || j<0 || i>=m || j>=n || grid[i][j]==0|| v[i][j]) return;
        v[i][j]=true;
        ans.push_back({i,j});
        cheak(grid,v,i+1,j);
        cheak(grid,v,i,j+1);
        cheak(grid,v,i-1,j);
        cheak(grid,v,i,j-1);
    }

    void is_subset(vector<vector<int>>& grid,vector<pair<int,int>>& v){
        for(auto [i,j] :v){
            if(grid[i][j]==0) return;
        }
        ct++;
    }
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int m=grid1.size();
        int n=grid1[0].size();

        vector<vector<bool>> visit(m,vector<bool>(n,false));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid2[i][j]!=0 && !visit[i][j]){
                    ans.clear();
                    cheak(grid2,visit,i,j);
                    is_subset(grid1,ans);
                }    
            }
        }
        return ct;
    }
};
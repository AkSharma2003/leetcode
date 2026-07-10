class Solution {
public:
    void cheak(vector<vector<char>>& grid, vector<vector<bool>>& v,int i,int j){
        int m=grid.size();
        int n=grid[0].size();

        if(i<0 || j<0 || i>=m || j>=n || grid[i][j]=='0'|| v[i][j]) return;
        v[i][j]=true;
        cheak(grid,v,i+1,j);
        cheak(grid,v,i,j+1);
        cheak(grid,v,i-1,j);
        cheak(grid,v,i,j-1);
    }
    int numIslands(vector<vector<char>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int ans=0;
        vector<vector<bool>> visit(m,vector<bool>(n,false));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]!='0' && !visit[i][j]){
                    ans++;
                    cheak(grid,visit,i,j);
                }    
            }
        }
        return ans;
    }
};
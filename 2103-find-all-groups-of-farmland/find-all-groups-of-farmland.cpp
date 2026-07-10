class Solution {
public:
    vector<vector<int>> ans;
    vector<int>temp;
    void cheak(vector<vector<int>>&land,vector<vector<bool>>&v,int i, int j){
        int m=land.size();
        int n=land[0].size();
        if(i<0||j<0||i>=m||j>=n||v[i][j] || land[i][j]==0) return;
        v[i][j]=true;

        temp[2] = max(temp[2], i);
        temp[3] = max(temp[3], j);

        cheak(land,v,i,j+1);
        cheak(land,v,i+1,j);
    }

    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        int m=land.size();
        int n=land[0].size();
        vector<vector<bool>>visit(m,vector<bool>(n,false));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(land[i][j]==1 && !visit[i][j]){
                    temp = vector<int>(4,0);
                    temp[0]=i;
                    temp[1]=j;
                    cheak(land,visit,i,j);
                    ans.push_back(temp);
                }
            }
        }
        return ans;
    }
};
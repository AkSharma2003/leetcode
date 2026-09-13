class Solution {
public:
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        int n=img1.size();
        vector<pair<int, int>> first,second;

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(img1[i][j]==1) first.push_back({i,j});
                if(img2[i][j]==1) second.push_back({i,j});
            }    
        }

        unordered_map<int,int> count;
        int ans=0;

        for(auto[r1,c1]:first){
            for(auto[r2,c2]:second){
                int a=r1-r2;
                int b=c1-c2;
                int key=a*100+b;
                count[key]++;

                ans=max(ans,count[key]);
            }
        }
        return ans;
    }
};
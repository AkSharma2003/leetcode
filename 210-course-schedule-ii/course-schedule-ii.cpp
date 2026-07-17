class Solution {
public:
    bool isCycle(int src,vector<bool> &vis, vector<bool> & path,vector<vector<int>>& edge){
        vis[src]=true;
        path[src]=true;

        for(int i=0;i<edge.size();i++){
            int v=edge[i][0];
            int u=edge[i][1];
            if(u==src){
                if(!vis[v]){
                    if(isCycle(v,vis,path,edge)){
                        return true;
                    }
                }
                else if(path[v]) return true;
            }
        }
        path[src]=false;
        return false;
    }

    void topo(int src,stack<int> &s, vector<bool> &vis,vector<vector<int>>& edge){
        vis[src]=true;

        for(int i=0;i<edge.size();i++){
            int v=edge[i][0];
            int u=edge[i][1];
            if(u==src){
                if(!vis[v]){
                    topo(v,s,vis,edge);
                }
            }
        }
        s.push(src);
    }

    vector<int> findOrder(int n, vector<vector<int>>& edge) {
        vector<bool> vis(n,false);
        vector<bool> path(n,false);

        vector<int>ans;

        for(int i=0;i<n;i++){
            if(!vis[i]){
                if(isCycle(i,vis,path,edge)){
                    return ans;
                }
            }
        }
        vis.assign(n,false);
        stack<int> s;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                topo(i,s,vis,edge);
            }
        }
        while(s.size()>0){
            ans.push_back(s.top());
            s.pop();
        }

        return ans;
    }
};
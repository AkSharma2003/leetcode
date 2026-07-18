class Solution {
public:
    vector<int> circularGameLosers(int n, int k) {
        vector<int>v(n+1,-1);
        int i=1;
        int pos=1;
        while(i){
            i=i%n;
            if(i==0) i=n;
            if(v[i]==0){
                break;
            }
            else{
                v[i]=0;
            }
            i=i+(pos*k);
            pos++;
        }
        vector<int> ans;
        for(int i=1;i<=n;i++){
            if(v[i]==-1) ans.push_back(i);
        }
        return ans;
    }
};
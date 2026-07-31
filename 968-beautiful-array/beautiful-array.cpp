class Solution {
public:
    vector<int> beautifulArray(int n) {
        vector<int> ans{1};
        while(ans.size()<n){
            vector<int> temp;
            for(int a:ans){
                int num=a*2-1;
                if(num<=n) temp.push_back(num);
            }

            for(int a:ans){
                int num=a*2;
                if(num<=n) temp.push_back(num);
            }
            ans=temp;
        }
        return ans;
    }
};
class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<char,int> mp;
        for(char c:word){
            mp[c]++;
        }
        int ans=0;
        int n=mp.size();
        vector<int> v;
        for(auto &at:mp){
            v.push_back(at.second);
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            int num=v[i]*((i/8)+1);
            ans+=num;
        }
        return ans;
    }
};
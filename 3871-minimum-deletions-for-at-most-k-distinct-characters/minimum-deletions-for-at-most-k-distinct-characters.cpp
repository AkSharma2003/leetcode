class Solution {
public:
    int minDeletion(string s, int k) {
        unordered_map<char,int> mp;

        for(char c:s){
            mp[c]++;
        }

        vector<pair<char,int>> v;

        for(auto &it:mp){
            v.push_back({it.first,it.second});
        }

        sort(v.begin(), v.end(), [](pair<char,int> a, pair<char,int> b) {
            return a.second < b.second;
        });

        int n=v.size();
        int ans=0;
        for(int i=0;i<n-k;i++){
            ans+=v[i].second;
        }

        return ans;
    }
};
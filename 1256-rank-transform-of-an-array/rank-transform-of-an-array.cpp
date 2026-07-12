class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        unordered_map<int,int> mp;
        set<int> s(arr.begin(),arr.end());

        int rank=1;
        for(int i:s){
            mp[i]=rank++;
        }

        vector<int> ans;
        for(int i:arr){
            ans.push_back(mp[i]);
        }
        return ans;
    }
};
class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_map<int,int> mp;

        for(int i:nums) mp[i]++;
        int i=0;
        int n;
        while(++i){
            n=k*i;
            if(mp.count(n)==0) break;
        }
        return n;
    }
}; 
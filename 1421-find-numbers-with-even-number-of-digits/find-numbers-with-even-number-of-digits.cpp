class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans=0;
        for(int i:nums){
            int d = to_string(i).size();
            if(d%2==0) ans++;
        }
        return ans;
    }
};
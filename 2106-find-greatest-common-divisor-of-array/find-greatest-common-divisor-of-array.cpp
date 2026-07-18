class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mn=INT_MAX;
        int mx=-1;
        for(int i: nums){
            mn=min(mn,i);
            mx=max(mx,i);
        }
        return gcd(mn,mx);
    }
};
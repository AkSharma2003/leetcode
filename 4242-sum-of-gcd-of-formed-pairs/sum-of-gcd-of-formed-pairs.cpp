class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n=nums.size();
        vector<int> v;
        int mx=0;
        for(int i:nums){
            mx=max(mx,i);
            int num=gcd(i,mx);
            v.push_back(num);
        }
        sort(v.begin(),v.end());
        int i=0,j=n-1;
        long long ans=0;
        while(i<j){
            int num=gcd(v[i],v[j]);
            ans+=num;
            i++;
            j--;
        }
        return ans;
    }
};
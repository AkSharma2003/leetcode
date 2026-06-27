class Solution {
public:
    int maximumLength(vector<int>& nums) {
        unordered_map<long long,int> mp;
        int ans=0;
        for(int i:nums){
            mp[i]++;
        }   
        if(mp.count(1)){
            ans=mp[1];
            if(ans%2==0) ans--;
        }
        if(ans>1 && ans%2==0) ans--;
        for(auto &[num,len]:mp){
            if (num==1) continue;
            int temp=0;
            long long cur=num;
            while(mp.count(cur)&&mp[cur]>=2){
                temp+=2;
                cur*=cur;
                if(cur>1e9) break;
            }
            if(mp.count(cur) && mp[cur]>=1) temp++;
            else temp--;
            ans=max(ans,temp);
        }
        return ans;
    }
};
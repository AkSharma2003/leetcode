class Solution {
public:
    int sumCounts(vector<int>& nums) {
        set<int> st;
        int ans=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            set<int> st;
            st.insert(nums[i]);
            ans+=1;
            for(int j=i+1;j<n;j++){
                st.insert(nums[j]);
                int l=st.size();
                ans+=(l*l);
            }
        }
        return ans;
    }
};
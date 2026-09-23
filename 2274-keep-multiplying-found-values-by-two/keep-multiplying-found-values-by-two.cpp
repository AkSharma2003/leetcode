class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        unordered_set<int> st;

        for(int i:nums){
            st.insert(i);
        }
        int ans=original;
        while(st.find(ans)!=st.end()){
            ans*=2;
        }
        return ans;
    }
};
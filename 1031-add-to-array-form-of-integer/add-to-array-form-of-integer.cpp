class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int> ans;
        int carry=0;
        int n=num.size()-1;
        while(k>0 || carry>0 || n>=0){
            int sm=carry;
            if(k>0){
                sm+=k%10;
                k/=10;
            }
            if(n>=0){
                sm+=num[n--];
            }
            carry=sm/10;
            ans.push_back(sm%10);
        }
        n=ans.size();
        for(int i=0;i<n/2;i++){
            swap(ans[i],ans[n-1-i]);
        }
        return ans;
    }
};
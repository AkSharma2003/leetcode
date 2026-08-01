class Solution {
public:
    vector<int> twoSum(vector<int>& num, int tgt) {
        int n=num.size()-1;
        int i=0;
        while(i<n){
            if(num[i]+num[n]==tgt) break;
            if(num[i]+num[n]>tgt) n--;
            else i++;
        }
        vector<int> ans;
        ans.push_back(i+1);
        ans.push_back(n+1);

        return ans;
    }
};
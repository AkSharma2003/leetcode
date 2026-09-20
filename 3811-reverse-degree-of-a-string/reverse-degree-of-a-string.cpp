class Solution {
public:
    int reverseDegree(string s) {
        int ans=0;

        for(int i=0;i<s.length();i++){
            int n=26-(s[i]-'a');
            n*=(i+1);
            ans+=n;
        }

        return ans;
    }
};
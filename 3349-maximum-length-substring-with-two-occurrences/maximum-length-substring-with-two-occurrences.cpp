class Solution {
public:
    int maximumLengthSubstring(string s) {
        vector<int> v(26,0);
        int ans=0;
        int ct=0;

        for(int i=0;i<s.length();i++){
            v[s[i]-'a']++;

            while(v[s[i]-'a']>2){
                v[s[ct]-'a']--;
                ct++;
            }
            ans=max(ans,i-ct+1);
        }

        return ans;
    }
};
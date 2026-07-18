class Solution {
public:
    vector<string> cellsInRange(string s) {
        char c1=s[0];
        char n1=s[1];
        char c2=s[3];
        char n2=s[4];
        vector<string> ans;
        for(char c=c1;c<=c2;c++){
            string s="";
            s+=c;
            for(char n=n1;n<=n2;n++){
                ans.push_back(s+n);
            }
        }
        return ans;
    }
};
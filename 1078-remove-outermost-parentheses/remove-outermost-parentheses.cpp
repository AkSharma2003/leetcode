class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans="";
        int ct=0;

        for(char c:s){
            if(c=='('){
                if(ct>0) ans+=c;
                ct++;
            }
            else{
                ct--;
                if(ct>0) ans+=c;
            }
        }
        return ans;
    }
};
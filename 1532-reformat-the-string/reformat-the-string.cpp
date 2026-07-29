class Solution {
public:
    string reformat(string s) {
        int c=0;
        string str="";
        string dig="";

        for(char c:s){
            if(c>='0' && c<='9') dig+=c;
            else str+=c;
        }

        if(abs((int)str.length()-(int)dig.length())>1) return "";

        string ans="";
        if(str.length()>dig.length()){
            int i;
            for(i=0;i<dig.length();i++){
                ans+=str[i];
                ans+=dig[i];
            }
            ans+=str[i];
        }
        else{
            int i;
            for(i=0;i<str.length();i++){
                ans+=dig[i];
                ans+=str[i];
            }
            if(str.length()!=dig.length()) ans+=dig[i];
        }
        return ans;
    }
};
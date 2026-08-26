class Solution {
public:
    pair<string,int> beuty(string s, int i, int k){
        string str="";
        int l=s.length();
        int ct=0;
        while(ct<k && i<l){
            str+=s[i];
            if(s[i]=='1') ct++;
            i++;
        }

        return {str,ct};
    }
    string shortestBeautifulSubstring(string s, int k) {
        string str="";
        int ct=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1') ct++;
            str+=s[i];
        }

        if(ct<k) return "";

        pair<string,int> bu;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1'){
                bu=beuty(s,i,k);
                if(bu.second==k){
                    if(str.length()==bu.first.length()){
                        str=str>bu.first?bu.first:str;
                    }
                    else if(str.length()>bu.first.length()){
                        str=bu.first;
                    }
                }
            }
        }
        return str;
    }
};
class Solution {
public:
    string smallestPalindrome(string s) {
        int l=s.length();
        if(l<2) return s;
        string str="";
        for(int i=0;i<l/2;i++){
            str+=s[i];
        }
        char c=0;

        for(char i:s){
            c^=i;
        }
        sort(str.begin(),str.end());
        string ans=str;
        if(c) ans+=c;
        reverse(str.begin(),str.end());
        return ans+str;

    }
};
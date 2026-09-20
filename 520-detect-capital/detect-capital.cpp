class Solution {
public:
    bool detectCapitalUse(string word) {
        int l=0,u=0;

        for(char c:word){
            if(islower(c)) l++;
            if(isupper(c)) u++;
        }

        if(l==word.length() || u==word.length()) return true;
        if(u==1) if(isupper(word[0])) return true;

        return false;
    }
};
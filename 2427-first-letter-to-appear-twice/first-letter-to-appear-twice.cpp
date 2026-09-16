class Solution {
public:
    char repeatedCharacter(string s) {
        vector<int> v(26,0);

        for(char c:s){
            int ch=c-'a';
            v[ch]++;
            if(v[ch]==2) return c;
        }
        return ' ';
    }
};
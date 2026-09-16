class Solution {
public:
    bool areOccurrencesEqual(string s) {
        vector<int> v(26,0);
        for(char c:s){
            v[c-'a']++;
        }
        int chek=v[s[0]-'a'];

        for(int i:v){
            if(i!=0 && i!=chek) return false;
        }

        return true;
    }
};
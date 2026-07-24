class Solution {
public:
    int minimizedStringLength(string s) {
        set<char> a;
        for(char c:s){
            a.insert(c);
        }
        return a.size();
    }
};
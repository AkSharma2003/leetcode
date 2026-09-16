class Solution {
public:
    int residuePrefixes(string s) {
        unordered_set<char> st;
        int result = 0;
        for(int i = 0; i < s.length(); ++i){
            st.insert(s[i]);
            if (st.size() == (i + 1) % 3)
                result++;
            if (st.size() > 2)
                break;
        }
        return result;
    }
};
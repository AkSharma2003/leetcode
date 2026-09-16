class Solution {
public:
    int residuePrefixes(string s) {
        int ct=0,i=0;
        set<char> st;

        for(char c:s){
            i++;
            st.insert(c);
            if(i%3==st.size()) ct++;
        }

        return ct;
    }
};
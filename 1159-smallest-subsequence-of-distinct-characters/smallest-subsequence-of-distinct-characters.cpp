class Solution {
public:
    string smallestSubsequence(string s) {
        vector<int> v(26,0);
        vector<bool>vis(26,false);

        for(char c:s){
            v[c-'a']++;
        }
        stack<char> st;

        for(char c:s){
            v[c-'a']--;
            if(vis[c-'a']) continue;

            while(!st.empty() && st.top()>c && v[st.top()-'a']>0){
                vis[st.top()-'a']=false;
                st.pop();
            }
            vis[c-'a']=true;
            st.push(c);
        }

        string ans="";
        while(!st.empty()){
            char c=st.top();
            ans+=c;
            st.pop();
        }

        reverse(ans.begin(),ans.end());
        return ans;
    }
};
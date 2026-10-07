class Solution {
public:
    
    int minvalid(string s){
        stack<char> st;
        for(char c:s){
            if(c=='(') st.push('(');
            else if(c==')'){
                if(st.size()>0 && st.top()=='(') st.pop();
                else st.push(')');
            }
        }
        return st.size();
    }

    void remove(unordered_map<string,int> &mp, string s,int min,vector<string> &ans){
        if(min<0) return;
        if(minvalid(s)==0){
            if(mp[s]!=0) return;
            else {
                ans.push_back(s);
                mp[s]++;
                return;
            }
        }
        else{
            mp[s]++;
        }

        for(int i=0;i<s.length();i++){
            string str = s.substr(0, i) + s.substr(i + 1);
            if(mp[str]!=0) continue;
            remove(mp,str,min-1,ans);
        }

    }
    vector<string> removeInvalidParentheses(string s) {
        int l=minvalid(s);
        unordered_map<string,int> mp;
        vector<string> ans;
        remove(mp,s,l,ans);
        return ans;
    }
};
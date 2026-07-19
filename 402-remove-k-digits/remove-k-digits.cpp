class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;
        for(char c:num){
            while(!st.empty() && k>0 && st.top()>c){
                st.pop();
                k--;
            }
            st.push(c);
        }

        while(k>0 && !st.empty()){
            st.pop();
            k--;
        }

        string ans="";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        
        int n=0;
        for(int i=0;i<ans.size();i++){
            if(ans[i]=='0') n++;
            else break;
        }

        ans=ans.substr(n);

        if(ans=="") return "0";
        return ans;
    }
};
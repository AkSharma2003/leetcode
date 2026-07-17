class Solution {
public:
    string simplifyPath(string path) {
        stringstream ss(path);
        string word;
        stack<string> stk;

        while(getline(ss,word,'/')){
            if(word=="" || word==".")continue;
            if(word==".."){
                if(!stk.empty()){
                    stk.pop();
                }
            }
            else{
                stk.push(word);
            }
            
        }
        stack<string> stk1;
        while(!stk.empty()){
            stk1.push(stk.top());
            stk.pop();
        }

        string ans="";
        while(!stk1.empty()){
            ans+='/';
            ans+=stk1.top();
            stk1.pop();
        }
        if(ans.size()==0) return "/";
        return ans;
    }
};
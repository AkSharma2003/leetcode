class Solution {
public:
    string simplifyPath(string path) {
        stringstream ss(path);
        string word;
        vector<string> ans;

        while(getline(ss,word,'/')){
            if(word=="" || word==".")continue;
            if(word==".."){
                if(!ans.empty()){
                    ans.pop_back();
                }
            }
            else{
                ans.push_back(word);
            }
            
        }
        string final="";
        for(string &s:ans){
            final+='/';
            final+=s;
        }
        if(final.size()==0) return "/";
        return final;
    }
};
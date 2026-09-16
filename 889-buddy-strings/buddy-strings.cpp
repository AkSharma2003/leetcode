class Solution {
public:
    bool buddyStrings(string s1, string s2) {
        if(s1.length()!=s2.length()) return false;
        int l=s1.size();
        vector<int> wrong;
        vector<int> v(26,0);
        for(int i=0;i<l;i++){
            if(s1[i]!=s2[i]) wrong.push_back(i);
            v[s1[i]-'a']++;
        }

        if(wrong.size()==0){
            for(int i:v){
                if(i>=2) return true;
            }
            return false;
        }
        if(wrong.size()!=2) return false;

        return s1[wrong[0]]==s2[wrong[1]] && s1[wrong[1]]==s2[wrong[0]];
    }
};
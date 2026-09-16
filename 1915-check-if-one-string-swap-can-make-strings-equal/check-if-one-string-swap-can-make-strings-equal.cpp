class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1.length()!=s2.length()) return false;
        int l=s1.size();
        vector<int> wrong;

        for(int i=0;i<l;i++){
            if(s1[i]!=s2[i]) wrong.push_back(i);
        }

        if(wrong.size()==0) return true;
        if(wrong.size()!=2) return false;

        return s1[wrong[0]]==s2[wrong[1]] && s1[wrong[1]]==s2[wrong[0]];
    }
};
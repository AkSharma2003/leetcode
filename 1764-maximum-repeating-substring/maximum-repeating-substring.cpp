class Solution {
public:
    int maxRepeating(string sequence, string word) {
        int l=sequence.length();
        string repet=word;
        int n=word.length();
        int ans=0;

        while(sequence.find(repet)!=string::npos){
            ans++;
            repet+=word;
        }
        return ans;
    }
};
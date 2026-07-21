class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        vector<int> zeroes;
        int first=0;
        for(char c:s){
            if(c=='1') first++;
        }
        int ct=0;
        bool flag=false;
        for(char c:s){
            if(c=='0'){
                ct++;
                flag=true;
            }
            else{
                if(flag){
                    zeroes.push_back(ct);
                    ct=0;
                    flag=false;
                }
            }
        }
        if(flag) zeroes.push_back(ct);

        if(zeroes.size()<2) return first;
        int mx=zeroes[0]+zeroes[1];
        for(int i=1;i<zeroes.size();i++){
            mx=max(mx,(zeroes[i-1]+zeroes[i]));
        }
        return mx+first;
    }
};
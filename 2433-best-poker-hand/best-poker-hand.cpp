class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        unordered_map<int,int> mp1;
        unordered_map<char,int>mp2;
        for(int i:ranks) mp1[i]++;
        for(char i:suits) mp2[i]++;

        if(mp2.size()==1) return "Flush";
        int ans=0;
        for(auto [k,v]:mp1){
            ans=max(ans,v);
        }

        if(ans>=3) return "Three of a Kind";
        else if(ans>=2) return "Pair";

        return "High Card";
    }
};
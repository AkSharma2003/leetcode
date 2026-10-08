class Solution {
public:
    bool checkTwoChessboards(string coordinate1, string coordinate2) {
        int a=coordinate1[0]-'a'+1+coordinate1[1];
        int b=coordinate2[0]-'a'+1+coordinate2[1];

        if(a%2==0 && b%2==0) return true;
        if(a%2==1 && b%2==1) return true;
        return false;
    }
};
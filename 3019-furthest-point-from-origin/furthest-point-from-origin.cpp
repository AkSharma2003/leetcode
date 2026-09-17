class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int p=0,m=0,ct=0;
        for(char c:moves){
            if(c=='L') p++;
            else if(c=='R') m++;
            else if(c=='_') ct++;
        }

        return abs(p-m)+ct;
    }
};
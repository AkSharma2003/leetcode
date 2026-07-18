class Solution {
public:
    long long coloredCells(int n) {
        long long l;
        l=1LL*n*n+1LL*(n-1)*(n-1);
        return l;
    }
};
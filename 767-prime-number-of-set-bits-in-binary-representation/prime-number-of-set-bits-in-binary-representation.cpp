class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        int ans=0;
        for(int i=left;i<=right;i++){
            if((665772 >> __builtin_popcount(i)) & 1) ans++;
        }
        return ans;
    }
};
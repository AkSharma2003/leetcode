class Solution {
public:
    bool isPrime(int n) {
    if (n <= 1) return false;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }

    return true;
}
    int countPrimeSetBits(int left, int right) {
        int ans=0;
        for(int i=left;i<=right;i++){
            int n=i;
            int ct=0;
            while(n){
                ct+=(n&1);
                n>>=1;
            }
            if(isPrime(ct)) ans++;
        }
        return ans;
    }
};
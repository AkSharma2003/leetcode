class Solution {
public:
    int digitProduct(int n){
        int m=1;
        while(n){
            m*=(n%10);
            n/=10;
        }
        return m;
    }
    int smallestNumber(int n, int t) {
        while (true) {
        if (digitProduct(n) % t == 0)
            return n;
            n++;
        }
    }
};
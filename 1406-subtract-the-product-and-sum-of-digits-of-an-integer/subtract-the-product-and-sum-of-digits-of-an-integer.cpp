class Solution {
public:
    int subtractProductAndSum(int n) {
        long long mul=1,sm=0;
        while(n){
            long long num=n%10;
            mul*=num;
            sm+=num;
            n/=10;
        }

        return mul-sm;
    }
};
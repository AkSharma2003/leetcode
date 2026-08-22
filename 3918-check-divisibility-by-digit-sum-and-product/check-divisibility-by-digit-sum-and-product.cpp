class Solution {
public:
    bool checkDivisibility(int n) {
        int d=n;
        int sum=0;
        int mul=1;

        while(n){
            int num=n%10;
            sum+=num;
            n/=10;
        }

        n=d;
        while(n){
            int num=n%10;
            mul*=num;
            n/=10;
        }

        sum+=mul;
        if(d%sum==0) return true;
        return false;
    }
};
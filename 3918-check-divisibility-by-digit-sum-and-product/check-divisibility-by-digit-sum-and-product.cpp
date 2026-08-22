class Solution {
public:
    bool checkDivisibility(int n) {
        int d=n;
        int sum=0;
        int mul=1;

        while(n){
            int num=n%10;
            sum+=num;
            mul*=num;
            n/=10;
        }

        return !(d%(sum+mul));
    }
};
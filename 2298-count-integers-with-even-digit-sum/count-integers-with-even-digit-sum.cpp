class Solution {
public:
    int countEven(int num) {
        int sum=0;
        int ans=num;
        while(num){
            sum+=(num%10);
            num/=10;
        }
        if(sum%2) return (ans-1)/2;
        return ans/2;
    }
};
class Solution {
public:
    int rev(int n){
        int num=0;
        while(n){
            int rem=n%10;
            num=num*10+rem;
            n=n/10;
        }
        return num;
    }
    bool sumOfNumberAndReverse(int num) {
        for(int i=0;i<=num;i++){
            if((i+rev(i))==num) return true;
        }
        return false;
    }
};
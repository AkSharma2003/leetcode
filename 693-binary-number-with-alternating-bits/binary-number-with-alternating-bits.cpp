class Solution {
public:
    bool hasAlternatingBits(int n) {
        bool f=true;
        int a;
        while(n){
            if(f){
                a=n%2;
                n/=2;
                f=false;
            }
            else{
                if(n%2==a) return false;
                a=n%2;
                n/=2;
            }
        }
        return true;
    }
};
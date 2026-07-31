class Solution {
public:
    int countEven(int num) {
        int ans=0;
        for(int i=1;i<=num;i++){
            int ct=0;
            int n=i;
            while(n){
                ct+=(n%10);
                n/=10;
            }
            if(ct%2==0) ans++;
        }
        return ans;
    }
};
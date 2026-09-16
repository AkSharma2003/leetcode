class Solution {
public:
    vector<int> evenOddBit(int n) {
        int i=0,odd=0,even=0;

        while(n){
            if(n%2){
                if(i%2) odd++;
                else even++;
            }
            n/=2;
            i++;
        }
        return {even,odd};
    }
};
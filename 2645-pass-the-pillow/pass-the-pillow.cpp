class Solution {
public:
    int passThePillow(int n, int time) {
        int a=time%((n-1)*2);

        if(a<n) return a+1;
        return n*2-1-a;
    }
};
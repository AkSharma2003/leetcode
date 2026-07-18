class Solution {
public:
    int numberOfChild(int n, int k) {
        int a=k%((n-1)*2);
        if(a<n) return a;
        return (n-1)*2-a;
    }
};
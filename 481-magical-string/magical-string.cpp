class Solution {
public:
    int magicalString(int n) {
        if(n<=0) return 0;
        if(n<=3) return 1;
        deque<int> d;
        d.push_back(2);
        int ct=1;
        bool flag=true;
        int l=0;
        int i=2;
        while(i<n-1){
            int p=d[l++];
            if(flag){
                while(p-- && i<n-1){
                    ct++;
                    i++;
                    d.push_back(1);
                }
                flag=false;
            }
            else{
                while(p-- && i<n-1){
                    d.push_back(2);
                    i++;
                }
                flag=true;
            }
        }
        return ct;
    } 
};
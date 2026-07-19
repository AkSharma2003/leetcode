class Solution {
public:
    int monotoneIncreasingDigits(int n) {
        if(n<10) return n;
        int i=0;
        int pos=0;
        string ans="";
        int last=n%10;
        n=n/10;
        while(n){
            i++;
            int temp=n%10;
            n=n/10;
            if(last<0){
                last=9;
                temp--;
            }
            if(last<temp){
                ans="9"+ans;
                temp--;
                pos=i;
            }
            else{
                char s=last+'0';
                ans=s+ans;
            }
            last=temp;
        }
        char s=last+'0';
        ans=s+ans;
        int m=ans.length();

        for(int j=m-1;j>=m-pos;j--){
            ans[j]='9';
        }
        return stoi(ans);
    }
};
class Solution {
public:
    int numSteps(string s) {
        int ans=0;
        int carry=0;
        for(int i=s.length()-1;i>0;i--){
            int a=(s[i]-'0')+carry;

            if(a==1){
                carry=1;
                ans+=2;
            }
            else ans++;
        }
        return ans+carry;
    }
};
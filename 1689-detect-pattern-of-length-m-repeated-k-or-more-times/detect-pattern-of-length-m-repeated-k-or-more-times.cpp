class Solution {
public:
    bool containsPattern(vector<int>& arr, int m, int k) {
        int l=arr.size();
        if(l<m) return false;

        string chek="";
        for(int i:arr){
            char c=i+'0';
            chek+=c;
        }

        int ans=0;
        for(int i=0;i<l-m;i++){
            string str=chek.substr(i,m);
            string s=str;
            ans=0;
            while(chek.find(s)!=string::npos){
                ans++;
                s+=str;
            }
            if(ans>=k) return true;
        }
        if(ans>=k) return true;
        return false;
    }
};
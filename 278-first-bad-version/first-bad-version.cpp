// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int f=0;
        int l=n;
        while(f<l){
            int mid=f+(l-f)/2;
            bool chek=isBadVersion(mid);
            if(chek){
                l=mid;
            }else{
                f=mid+1;
            }
        }

        return f;
    }
};
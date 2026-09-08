class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
        v.insert(v.end(),nums1.begin(),nums1.end());
        v.insert(v.end(),nums2.begin(),nums2.end());

        sort(v.begin(),v.end());
        int s=v.size();
        int n;
        if(s%2==0){
            n=s/2;
            int sum=v[n]+v[n-1];
            return sum/2.0;
        }
        n=(s+1)/2;
        return v[n-1];
    }
};
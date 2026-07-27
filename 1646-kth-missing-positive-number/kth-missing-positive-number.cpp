class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int ct=0,num=0;
        int i;
        for(i=0;i<arr.size();i++){
            ct+=arr[i]-num-1;
            num=arr[i];
            if(ct>=k) break;
        }

        if(i<arr.size()) {
            return arr[i]-(ct-k)-1;
        }

        return arr.back()+(k-ct);
    }
};
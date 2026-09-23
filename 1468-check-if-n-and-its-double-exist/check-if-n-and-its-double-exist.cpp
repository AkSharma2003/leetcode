class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int,int> st;
        int ct=0;

        for(int i:arr){
            st[i]++;
        }

        for(int i:arr){
            if(i!=0 && st.find(i*2)!=st.end()) return true;
        }

        if(st[0]>1) return true;
        return false;
    }
};
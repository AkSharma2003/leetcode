class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& rs) {
        unordered_map<int, int> mp;

        for(auto &r : rs) {
            int row = r[0];
            int seat = r[1];

            mp[row] |= (1 << seat);
        }

        int ans = (n - mp.size()) * 2;

        for(auto &[row, mask] : mp) {

            bool left  = (mask & (1 << 2)) == 0 &&
                         (mask & (1 << 3)) == 0 &&
                         (mask & (1 << 4)) == 0 &&
                         (mask & (1 << 5)) == 0;

            bool middle = (mask & (1 << 4)) == 0 &&
                          (mask & (1 << 5)) == 0 &&
                          (mask & (1 << 6)) == 0 &&
                          (mask & (1 << 7)) == 0;

            bool right = (mask & (1 << 6)) == 0 &&
                         (mask & (1 << 7)) == 0 &&
                         (mask & (1 << 8)) == 0 &&
                         (mask & (1 << 9)) == 0;

            if(left && right)
                ans += 2;
            else if(left || middle || right)
                ans += 1;
        }

        return ans;
    }
};
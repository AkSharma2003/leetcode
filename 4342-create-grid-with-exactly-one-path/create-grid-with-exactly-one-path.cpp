class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> ans;
        ans.push_back(string(n, '.'));
        string next = string(n - 1, '#') + '.';
        for (int i = 1; i < m; i++) {
            ans.push_back(next);
        }
        return ans;
    }
};
class Solution {
public:
    string merge(string a, string b) {
        if (a.find(b) != string::npos)
            return a;
        for (int len = min(a.size(), b.size()); len >= 0; len--) {
            if (a.substr(a.size() - len) == b.substr(0, len)) {
                return a + b.substr(len);
            }
        }
        return a + b;
    }
    string minimumString(string a, string b, string c) {
        vector<string> v = {a, b, c};
        sort(v.begin(), v.end());
        string ans = "";
        do {
            string cur = merge(merge(v[0], v[1]), v[2]);
            if (ans.empty() ||
                cur.size() < ans.size() ||
                (cur.size() == ans.size() && cur < ans)) {
                ans = cur;
            }
        } while (next_permutation(v.begin(), v.end()));
        return ans;
    }
};
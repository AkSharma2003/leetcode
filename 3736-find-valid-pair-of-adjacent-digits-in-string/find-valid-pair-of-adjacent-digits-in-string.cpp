class Solution {
public:
    string findValidPair(string s) {

        if (s.length() < 3)
            return "";
        unordered_map<char, int> mp;

        for (char c : s) {
            mp[c]++;
        }

        for (int i = 1; i < s.length(); i++) {
            char a = s[i];
            char b = s[i - 1];

            if (a != b && mp[a] == (a - '0') && mp[b] == (b - '0')) {
                string ans = "";
                ans += b;
                ans += a;

                return ans;
            }
        }

        return "";
    }
};
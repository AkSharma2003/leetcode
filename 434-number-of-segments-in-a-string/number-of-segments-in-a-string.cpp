class Solution {
public:
    int countSegments(string s) {
        stringstream ss(s);
        string word;
        int ct=0;
        while (ss >> word) {
            ct++;
        }
        return ct;
    }
};
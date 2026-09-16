class Solution {
public:
    int countPoints(string rings) {
        vector<tuple<int, int, int>> v(10, {0, 0, 0}); // R,G,B

        int l = rings.length();

        for (int i = 0; i < l; i += 2) {
            int a = rings[i + 1] - '0';
            if (rings[i] == 'R')
                get<0>(v[a]) = 1;
            else if (rings[i] == 'G')
                get<1>(v[a]) = 1;
            else
                get<2>(v[a]) = 1;
        }

        int ct = 0;
        for (auto i : v) {
            if (get<0>(i) && get<1>(i) && get<2>(i))
                ct++;
        }
        return ct;
    }
};
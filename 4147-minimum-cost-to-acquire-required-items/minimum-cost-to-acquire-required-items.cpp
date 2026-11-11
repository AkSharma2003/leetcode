class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth,
                          int need1, int need2) {
        long long ans = 1LL * need1 * cost1 + 1LL * need2 * cost2;
        int temp = min(need1, need2);
        long long abc;
        if (need1 == temp) {
            abc = 1LL * temp * costBoth;
            abc += 1LL * (need2 - need1) * cost2;
        }
        else {
            abc = 1LL * temp * costBoth;
            abc += 1LL * (need1 - need2) * cost1;
        }
        long long c = 1LL * max(need1, need2) * costBoth;
        return min({ans, abc, c});
    }
};
class Solution {
private:
    const long long CAP = 2000000; 

    long long countPermutations(vector<int>& freq, int n) {
        if (n == 0) return 1;
        long long result = 1;
        int used = 0;
        for (int i = 0; i < 26; i++) {
            for (int j = 0; j < freq[i]; j++) {
                used++;
                if (result > CAP) continue;
                result = result * used / (j + 1);
            }
        }
        return min(result, CAP + 1);
    }

public:
    string smallestPalindrome(string s, int k) {
        int l = s.length();
        vector<int> freq(26, 0);
        for (char c : s) freq[c - 'a']++;

        char midChar = 0;
        vector<int> halfFreq(26, 0);
        for (int i = 0; i < 26; i++) {
            halfFreq[i] = freq[i] / 2;
            if (freq[i] % 2 != 0) midChar = i + 'a';
        }

        int halfLen = l / 2;

        long long total = countPermutations(halfFreq, halfLen);
        if (k > total) return "";

        string firstHalf = "";
        int remaining = halfLen;

        for (int step = 0; step < halfLen; step++) {
            for (int i = 0; i < 26; i++) {
                if (halfFreq[i] == 0) continue;

                halfFreq[i]--;
                long long perms = countPermutations(halfFreq, remaining - 1);

                if (k > perms) {
                    k -= perms;
                    halfFreq[i]++;
                } else {
                    firstHalf += (i + 'a');
                    remaining--;
                    break;
                }
            }
        }

        string secondHalf = firstHalf;
        reverse(secondHalf.begin(), secondHalf.end());

        if (l % 2 != 0) return firstHalf + midChar + secondHalf;
        return firstHalf + secondHalf;
    }
};
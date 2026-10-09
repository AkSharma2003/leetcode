class Solution {
public:
    int minInsertions(string s) {
        int left = 0;
        int ct = 0;

        for(char c : s) {
            if(c == '(') {
                left += 2;
                if(left&1==1){
                    ct++;
                    left--;
                }
            }
            else {
                left--;

                if(left < 0) {
                    ct++;
                    left = 1;
                }
            }
        }

        return left + ct;
    }
};
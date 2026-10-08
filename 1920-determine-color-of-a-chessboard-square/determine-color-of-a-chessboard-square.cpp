class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int a=coordinates[0]-'a'+1+coordinates[1];

        return (a%2);
    }
};
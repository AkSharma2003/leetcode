class Solution {
public:
    int reverseDegree(string s) {
      int total = 0;
      int p = s.length();
      for(int i = 0; i < p; i++){
        total += (26 - (s[i] - 'a')) * (i+1);
      }  
      return total;
    }
};
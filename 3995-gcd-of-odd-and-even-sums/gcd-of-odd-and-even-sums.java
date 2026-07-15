class Solution {
    public int gcdOfOddEvenSums(int n) {
        int odd=n*n;
        int even =n*(n+1);
        while(odd%even!=0){
            int r=odd%even;
            odd=even;
            even=r;
        }
        return even;
    }
}
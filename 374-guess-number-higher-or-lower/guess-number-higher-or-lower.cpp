/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int f=0;
        int l=n;
        while(f<l){
            int mid=f+(l-f)/2;
            int chek=guess(mid);
            if(chek==0) return mid;
            else if(chek==-1){
                l=mid;
            }
            else{
                f=mid+1;
            }
        }

        return f;
    }
};
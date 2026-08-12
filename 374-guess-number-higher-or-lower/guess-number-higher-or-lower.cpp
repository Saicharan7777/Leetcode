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
        long long l = 1, h = n;
        while(l <= h) {
            long long int mid = (l + h) / 2;
            long long int number = guess(mid);

            if(number == 0) {
                return mid;
            }
            else if(number == 1) {
                l = mid + 1;
            }
            else {
                h = mid - 1;
            }
        }
        return -1;
    }
};
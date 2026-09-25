/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 */
int guess(int num);

int guessNumber(int n) {
    int left = 1, right = n;

    while (left <= right) {
        int pick = left + (right - left) / 2, num = guess(pick);

        if (num == -1) {
            right = pick - 1;
        } else if (num == 1) {
            left = pick + 1;
        } else {
            return pick;
        }
    }

    return 0;
}

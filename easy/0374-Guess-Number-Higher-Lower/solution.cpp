#include <iostream>

/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

int guess(int num) {
    int secretNumber = 6;

    if (num == 6) {
        return 0;
    }

    if (num < 6) {
        return 1;
    }

    if (num > 6) {
        return -1;
    }
}

class Solution {
public:
    int guessNumber(int n) {
        int left = 1;
        int right = n;


        while (left <= right) {
            int mid = left + (right - left) / 2;
            int possibleGuess = guess(mid);

            if (possibleGuess == 0) {
                return mid;
            }
            if (possibleGuess == 1) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }

        }
        return -1;
    }
};

void printGuess(int num) {
    std::cout << num << " is the correct answer!" << std::endl;
}

int main() {
    Solution sol;

    int n = 10;

    printGuess(sol.guessNumber(n));

}
#include <stdbool.h>

bool isPowerOfFour(int n) {
    long long solution = 1;

    while (solution < n) {
        solution *= 4;
    }

    if (solution == n) {
        return true;
    } else {
        return false;
    }
}

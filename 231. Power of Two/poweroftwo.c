#include <stdbool.h>

bool isPowerOfTwo(int n) {
    long long solution = 1;

    while (solution < n) {
        solution *= 2;
    }

    if (solution == n) {
        return true;
    } else {
        return false;
    }
}

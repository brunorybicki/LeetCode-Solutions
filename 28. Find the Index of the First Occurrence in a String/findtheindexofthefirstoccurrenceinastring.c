#include <string.h>

int strStr(char* haystack, char* needle) {
    int needleLength = strlen(needle), haystackLength = strlen(haystack);

    for (int i = 0; i <= haystackLength - needleLength; i++) {
        int j = 0;

        while (j < needleLength && haystack[i + j] == needle[j]) {
            j++;
        }

        if (j == needleLength) {
            return i;
        }
    }

    return -1;
}

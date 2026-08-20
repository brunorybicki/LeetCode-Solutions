int romanToInt(char* s) {
    if (s[0] == 'M') {
        return 1000 + romanToInt(s + 1);
    } else if (s[0] == 'D') {
        return 500 + romanToInt(s + 1);
    } else if (s[0] == 'C') {
        if (s[1] == 'M') {
            return 900 + romanToInt(s + 2);
        } else if (s[1] == 'D') {
            return 400 + romanToInt(s + 2);
        } else {
            return 100 + romanToInt(s + 1);
        }
    } else if (s[0] == 'L') {
        return 50 + romanToInt(s + 1);
    } else if (s[0] == 'X') {
        if (s[1] == 'C') {
            return 90 + romanToInt(s + 2);
        } else if (s[1] == 'L') {
            return 40 + romanToInt(s + 2);
        } else {
            return 10 + romanToInt(s + 1);
        }
    } else if (s[0] == 'V') {
        return 5 + romanToInt(s + 1);
    } else if (s[0] == 'I') {
        if (s[1] == 'X') {
            return 9 + romanToInt(s + 2);
        } else if (s[1] == 'V') {
            return 4 + romanToInt(s + 2);
        } else {
            return 1 + romanToInt(s + 1);
        }
    }

    return 0;
}

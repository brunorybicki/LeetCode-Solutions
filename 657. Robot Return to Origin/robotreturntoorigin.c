bool judgeCircle(char* moves) {
    int length = strlen(moves), x = 0, y = 0;

    for (int i = 0; i < length; i++) {
        if (moves[i] == 'U') {
            y++;
        } else if (moves[i] == 'D') {
            y--;
        } else if (moves[i] == 'L') {
            x--;
        } else if (moves[i] == 'R') {
            x++;
        }
    }

    if (x == 0 && y == 0) {
        return true;
    } else {
        return false;
    }
}

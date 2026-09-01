int sumOfSquares(int n) {
    int sum = 0;

    while (n > 0) {
        int digit = n % 10;
        sum += digit * digit;
        n /= 10;
    }

    return sum;
}

bool isHappy(int n) {
    int current = n;
    int runner = sumOfSquares(n);

    while (runner != 1 && current != runner) {
        current = sumOfSquares(current);
        runner = sumOfSquares(sumOfSquares(runner));
    }

    return runner == 1;
}

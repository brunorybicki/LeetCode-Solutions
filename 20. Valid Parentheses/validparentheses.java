class Solution {
    public boolean isValid(String s) {
        int top = -1;
        char[] stack = new char[10001];

        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);

            if (c == '(' || c == '{' || c == '[') {
                stack[++top] = c;
            } else {
                if (top == -1) {
                    return false;
                }

                char last = stack[top--];

                if (c == ')' && last != '(') {
                    return false;
                } else if (c == '}' && last != '{') {
                    return false;
                } else if (c == ']' && last != '[') {
                    return false;
                }
            }
        }

        return top == -1;
    }
}

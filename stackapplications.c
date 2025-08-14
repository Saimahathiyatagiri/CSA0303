#include <stdio.h>
#include <ctype.h>

char s[100]; int top = -1;

void push(char c) { s[++top] = c; }
char pop() { return top == -1 ? '\0' : s[top--]; }
char peek() { return top == -1 ? '\0' : s[top]; }

int p(char c) {
    return c == '^' ? 3 : c == '*' || c == '/' ? 2 : c == '+' || c == '-' ? 1 : 0;
}

int main() {
    char e[100], pfx[100]; int i, j = 0;
    printf("Enter infix: "); scanf("%s", e);
    
    for (i = 0; e[i]; i++) {
        if (isalnum(e[i])) pfx[j++] = e[i];
        else if (e[i] == '(') push(e[i]);
        else if (e[i] == ')') {
            while (peek() != '(') pfx[j++] = pop();
            pop();
        } else {
            while (p(peek()) >= p(e[i])) pfx[j++] = pop();
            push(e[i]);
        }
    }
    
    while (peek()) pfx[j++] = pop();
    pfx[j] = '\0';
    printf("Postfix: %s\n", pfx);
    return 0;
}
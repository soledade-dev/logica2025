#include <stdio.h>

int main() {
    int n, i, a, b;
    char s[4];

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%s", s);
        a = s[0] - '0';
        b = s[2] - '0';

        if (s[0] == s[2]) {
            printf("%d\n", a * b);
        } else if (s[1] >= 'A' && s[1] <= 'Z') {
            printf("%d\n", b - a);
        } else {
            printf("%d\n", a + b);
        }
    }

    return 0;
}

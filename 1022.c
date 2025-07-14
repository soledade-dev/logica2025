#include <stdio.h>


int mdc(int a, int b) {
    int resto;
    while (b != 0) {
        resto = a % b;
        a = b;
        b = resto;
    }
    return a;
}

int main() {
    int n;
    scanf("%d", &n);

    while (n--) {
        int n1, d1, n2, d2, rs_n, rs_d;
        char op, barra;

        scanf("%d %c %d %c %d %c %d", &n1, &barra, &d1, &op, &n2, &barra, &d2);

        if (op == '+') {
            rs_n = n1 * d2 + n2 * d1;
            rs_d = d1 * d2;
        } else if (op == '-') {
            rs_n = n1 * d2 - n2 * d1;
            rs_d = d1 * d2;
        } else if (op == '*') {
            rs_n = n1 * n2;
            rs_d = d1 * d2;
        } else if (op == '/') {
            rs_n = n1 * d2;
            rs_d = n2 * d1;
        }

        int simpl = mdc(rs_n < 0 ? -rs_n : rs_n, rs_d);
        printf("%d/%d = %d/%d\n", rs_n, rs_d, rs_n / simpl, rs_d / simpl);
    }

    return 0;
}

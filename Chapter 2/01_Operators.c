#include <stdio.h>
int main() {
    int a = 10, b = 3;
    int x = 5, y = 5;
    printf("=== Arithmetic Operators ===\n");
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n", a % b);

    printf("\n=== Increment / Decrement Operators ===\n");
    printf("x++ = %d\n", x++);
    printf("++y = %d\n", ++y);
    printf("x-- = %d\n", x--);
    printf("--y = %d\n", --y);

    printf("\n=== Relational Operators ===\n");
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);
    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a >= b: %d\n", a >= b);
    printf("a <= b: %d\n", a <= b);

    printf("\n=== Logical Operators ===\n");
    printf("(a > b) && (b < 5): %d\n", (a > b) && (b < 5));
    printf("(a < b) || (b < 5): %d\n", (a < b) || (b < 5));
    printf("!(a == b): %d\n", !(a == b));

    printf("\n=== Bitwise Operators ===\n");
    printf("a & b = %d\n", a & b);
    printf("a | b = %d\n", a | b);
    printf("a ^ b = %d\n", a ^ b);
    printf("a << 1 = %d\n", a << 1);
    printf("a >> 1 = %d\n", a >> 1);

    printf("\n=== Assignment Operators ===\n");
    int c = 10;
    printf("c = %d\n", c);
    printf("c += 2: %d\n", c += 2);
    printf("c -= 2: %d\n", c -= 2);
    printf("c *= 3: %d\n", c *= 3);
    printf("c /= 3: %d\n", c /= 3);
    printf("c %%= 3: %d\n", c %= 3);

    printf("\n=== Conditional (Ternary) Operator ===\n");
    int max = (a > b) ? a : b;
    printf("max = %d\n", max);
    return 0;
}

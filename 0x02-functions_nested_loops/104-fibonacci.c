#include <stdio.h>

int main() {
    int a = 1, b = 2, c, count = 2;
    printf("%d, %d, ", a, b);
    while (count < 98) {
        c = a + b;
        a = b;
        b = c;
        count++;
        printf("%d", c);
        if (count < 98) {
            printf(", ");
        } else {
            printf("\n");
        }
    }
    return 0;
}

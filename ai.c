#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    if (scanf("%d", &n) != 1) return 0;

    if (n < 0) {
        printf("NG");
    } else if (n > 100) {
        printf("0");
    } else {
        const int candidates = 51 - abs(n - 50);
        printf("%d", candidates / 2 * 2);
    }

    return 0;
}
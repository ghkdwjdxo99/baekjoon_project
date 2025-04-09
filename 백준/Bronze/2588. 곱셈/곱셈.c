#include <stdio.h>

int main()
{
    int num1, num2;
    int share, remainder;

    scanf("%d %d", &num1, &num2);

    share = num2 / 10;
    remainder = num2 % 10;

    for (int i = 0; i < 3; i++) {
        printf("%d\n", num1 * remainder);
        remainder = share % 10;
        share = share / 10;
    }

    printf("%d\n", num1 * num2);
    return 0;
}
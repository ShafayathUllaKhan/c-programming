#include <stdio.h>
// print the last number
int main(void)
{
    int n;
    scanf("%d", &n);

    while (n >= 1) {

        int last = n % 10;

        printf("%d\n", last);

        n = n / 10;
    }
    return 0;
}
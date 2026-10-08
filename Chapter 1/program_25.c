#include <stdio.h>

int main(void)
{
    int a[5] = {0};
    char b[5] = {0};
    short s[5] = {0};
    float f[5] = {0};
    double d[5] = {0};
    char c[5] = {0};

    printf("%d\n", a[0]);
    printf("%d\n", b[0]);
    printf("%d\n", s[0]);
    printf("%f\n", f[0]);
    printf("%lf\n", d[0]);
    printf("%c\n", c[0]);
    return 0;
}
#include <stdio.h>

int main(void)
{
    char *canChange = "Hello World";
    int a = 10;
    printf("%p\n",canChange); // ask for address
    printf("%s\n",canChange); // ask for address and print full string
    printf("%c\n",*canChange); // ask for value
    printf("%d\n",a); // ask for value
    printf("%d\n",*canChange);// prints 72 beacuse %d will look for integer and h ascii value is 72
    return 0;
}
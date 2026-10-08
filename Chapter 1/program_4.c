#include <stdio.h>

int main(void)
{
    int age = 22;
    int *ptr = &age;
    printf("ptr = %u\n",ptr);
    ptr++;
    printf("ptr = %u\n",ptr);
    ptr--;
    printf("ptr = %u\n",ptr);
    // char pointe - integer pointer is not possible and address difference wiil be on int or data type size as 1 and 4 bytes inter 
    return 0;
}
#include <stdio.h>

int main(void)
{
    int num;
    scanf("%d",&num);

    int a = 0;
    int b = 1;

    for (int i = 1; i <= num; i++)
    {
        printf("%d",a);
        int next = a + b;
        a = b;
        b = next;
    }
    
    return 0;
}
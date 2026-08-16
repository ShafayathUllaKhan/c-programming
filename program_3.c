#include <stdio.h>

int main(void)
{
    int marks[3];
    // int marks[] = {100,200,300};
    // int marks[3] = {100,200,300};
    printf("enter phy : ");
    scanf("%d",&marks[0]);

    printf("enter chem : ");
    scanf("%d",&marks[1]);

    printf("enter math : ");
    scanf("%d",&marks[2]);

    printf("phy = %d\nchem = %d\nmath = %d",marks[0],marks[1],marks[2]);
    return 0;
}
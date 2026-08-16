#include <stdio.h>

int main(void)
{
    int aadhar[5];

    // input
    int *ptr = &aadhar[0];
    for(int i=0;i<5;i++){
        printf("%d index : ",i);
        scanf("%d",(ptr+i));
    }

    // output
    for(int i=0;i<5;i++){
        printf("d index = %d\n",i,*(ptr+1));
    }
    return 0;
}
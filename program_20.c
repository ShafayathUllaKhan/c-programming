#include <stdio.h>

int squared(int n){
    return n * n;
}
int sum(int a,int b){
    a++;

    printf("%d\n",a);

    return a + b;
}
int main(void)
{
    printf("%d\n",squared(5));

    int n, num;

    scanf("%d %d",&n,&num);

    printf("%d\n",sum(n,num));

    printf("%d\n",n);
    return 0;
}
#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d",&n);
    int isPrime = 1;

    if (n<2)
    {
        isPrime = 0;
    }else{
        for(int i=2;i<= n/i;i++){
            if(n%i == 0){
                isPrime = 0;
                break;
            }
        }
    }

    if(isPrime){
        printf("%d is a prime number\n",n);
    }else{
        printf("%d is not a prime number\n",n);
    }

    printf("First four even numbers\n");

    for (int i=2; i <= 8; i+=2)
    {
        printf("%d",i);
    }
    
    
    return 0;
}
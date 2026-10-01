// finding all the prime numbers from 2 to 50

#include <stdio.h>

int isPrime(int n){
    if(n < 2){
        return 0;
    }

    for (int j = 2; j * j <= n; j++)
    {
        if(n % j == 0){
            return 0;
        }
    }
    return 1;
}


int main(void)
{
    
    for (int i=2;i<=50;i++){
        if(isPrime(i)){
            printf("%d is a prime number\n",i);
        }
    }
    return 0;
}
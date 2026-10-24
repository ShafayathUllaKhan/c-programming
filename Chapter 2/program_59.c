#include <stdio.h>

int factorial(int n){
    if(n == 1){
        return 1;
    }
    return n * factorial(n-1);
}

int sum(int n){
    if(n == 1){
        return 1;
    }

    return n + sum(n-1);
}

void natural_numbers(int n){
    if(n == 1){
        printf("%d",n);
        return;
    }

    natural_numbers(n-1);
    printf("%d",n);
}

int fibonacci(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }

    return fibonacci(n-1) + fibonacci(n-2);
}

int main(void)
{
    int n = 5;
    printf("%d is the factorial\n",factorial(n));
    printf("%d is the sum of n\n",sum(n));
    natural_numbers(n);
    printf("\n");
    printf("%d fibonaci\n",fibonacci(n));
    printf("\n");
    return 0;
}
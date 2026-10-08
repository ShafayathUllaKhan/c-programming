#include <stdio.h>

int factorial(int n){
    int factorial = 1;
    for (int i = 0; i < n; i++)
    {
        factorial = factorial * (i+1);
    }
    return factorial;
}

int main(void)
{
    int n , r;
    scanf("%d %d",&n,&r);

    int nfactorial = factorial(n);
    int rfactorial = factorial(r);
    int nrfactorial = factorial(n-r);
    printf("the ncr of %d and %d is %d",n,r,nfactorial / (rfactorial * nrfactorial));
    return 0;
}

// ncr 
// n r
// n! / r!*(n!-r!);

// One more important point: the async function does not necessarily create a new Error object. It uses the error that was thrown as the rejection reason of its returned Promise.
#include <stdio.h>

void print(int n){

    if(n == 1){
        printf("%d",n);
        return;
    }
    
    print(n-1);
    printf("%d",n);
}

int main(void)
{

    print(7);
    return 0;
}
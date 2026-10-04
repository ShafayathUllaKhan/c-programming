#include <stdio.h>

int main(void)
{
    int num;
    scanf("%d",&num);

    printf("Square of (*) pattern 1\n");

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            printf("*");
        }
        printf("\n");
        
    }

    printf("Printing other pattern 2\n");

    for(int i = 0; i < num; i++){
        for(int j=0;j < num; j++){
            printf("%d",i+1);
        }
        printf("\n");
    }
    
    printf("printing other pattern 3\n");

    for (int i = 0; i < num; i++)
    {
        for(int j=0;j<num;j++){
            printf("%d",j+1);
        }
        printf("\n");
    }
    
    printf("printing other pattern 4\n");

    for(int i=0;i<num;i++){
        for(int j=num;j>0;j--){
            printf("%d",j);
        }
        printf("\n");
    }

    printf("printing other pattern 5\n");

    for(int i=0;i<num;i++){
        for(int j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }

    printf("printing other pattern 6\n");

    for(int i=0;i<num;i++){
        for(int j=0;j<=i;j++){
            printf("%d",j+1);
        }
        printf("\n");
    }

    printf("printing other pattern 7\n");

    int p = 1;
    for(int i=0;i<=num;i++){
        for(int j=0;j<i;j++){
            printf("%d",p);
            p++;
        }
        printf("\n");
    }

    printf("printing other pattern 8\n");

    for(int i=0;i<num;i++){
        int c=i+1;
        for(int j=0;j<=i;j++){
            printf("%d",c);
            c++;
        }
        printf("\n");
    }

    printf("printing other pattern 9\n");

    for(int i=0;i<=num;i++){

        for (int k = 0; k <= num-i-1; k++)
        {
            printf(" ");
        }
        
        for (int j = 0; j <= (2*i+1)-1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
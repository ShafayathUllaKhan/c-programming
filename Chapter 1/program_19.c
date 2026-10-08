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

    for(int i=0;i<num;i++){

        for (int k = 0; k < num-i-1; k++)
        {
            printf(" ");
        }
        
        for (int j = 0; j < (i+1) * 2 -1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("printing other pattern 10\n");

    for (int i = 0; i < num; i++)
    {
        for (int k = 0; k < num-i-1; k++)
        {
            printf(" ");
        }

        for (int j = 0; j < (i+1)*2-1; j++)
        {
            
            printf("%d",j+1);
        }
        printf("\n");
    }

    printf("\nPattern 2 \n \n");

    char a = 'A';

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            int sample = a + (j+1)-1;
            printf("%c",sample);
        }
        printf("\n");
    }

    printf("\nprinting other pattern 2\n");

    for(int i=0;i<num;i++){
        char c = (a+i+1)-1;
        for(int j=0;j<num;j++){
            printf("%c",c);
            c++;
        }
        printf("\n");
    }

    printf("\nprinting other pattern 3\n");
    
    for (int i = num-1; i >= 0; i--)
    {
        for (int j=(i+1)-1; j >= 0; j--){
            printf("*");
        }
        printf("\n");
    }

    printf("\nprinting other pattern 4\n");

    for (int i = 0; i < num; i++)
    {
        for(int k = 0; k < num-1-i; k++){
            printf(" ");
        }
        for(int j=0; j <=i; j++){
            printf("*");
        }
        printf("\n");
    }
    
    printf("\nprinting other pattern 5\n");

    for(int i = 0; i < num; i++){
        for (int k = 0; k < i; k++)
        {
            printf(" ");
        }
        
        for(int j = 0; j < num-i; j++){
            printf("*");
        }
        printf("\n");
    }

    printf("\nprinting other pattern 6\n");
    
    for(int i = 0;i<num;i++){

        for(int k=0;k<num-i;k++){
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            printf("%d",j+1);
        }
        for(int c = (i+1)-1;c>=1;c--){
            printf("%d",c);
        }
        printf("\n");
    }

    printf("printing other pattern 7\n");

    for(int i=0;i<num;i++){
        for(int k=0;k<i;k++){
            printf(" ");
        }
        for (int j = 0; j < num-i; j++)
        {
            printf("%d",j+1);
        }
        for (int c = num-1-i; c >= 1; c--)
        {
            printf("%d",c);
        }
        
        printf("\n");
    }

    printf("printing other pattern 8\n");

    for (int i = 0; i < num; i++)
    {
        int sample = i + 1;
        for(int k=0;k<i;k++){
            printf(" ");
        }
        for (int j = 0; j < num-i; j++)
        {
            printf("%d ",sample);
            sample++;
        }
        printf("\n");
    }

    for(int i=0;i<num-1;i++){
        for (int k = 0; k < num-2-i; k++)
        {
            printf(" ");
        }
        for (int j = num-1-i; j <= num; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    
    return 0;
}
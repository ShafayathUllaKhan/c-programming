#include <stdio.h>

int main(void)
{
    FILE *fptr;
    fptr = fopen("/home/shafayath/Documents/my work/module_2.txt","r");

    char ch;
    fscanf(fptr,"%c",&ch);
    printf("character = %c\n",ch);
    fscanf(fptr,"%c",&ch);
    printf("character = %c\n",ch);
    fscanf(fptr,"%c",&ch);
    printf("character = %c\n",ch);
    fscanf(fptr,"%c",&ch);
    printf("character = %c\n",ch);
    fscanf(fptr,"%c",&ch);
    printf("character = %c\n",ch);
    fclose(fptr);
    return 0;
}
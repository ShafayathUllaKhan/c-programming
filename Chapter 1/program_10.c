#include <stdio.h>

int main(void)
{
    FILE *fptr;
    fptr = fopen("/home/shafayath/Documents/my work/module_2.txt","r");

    if(fptr == NULL){
        printf("file doesn't exist\n");
    }else{
        fclose(fptr);
    }
    return 0;
}
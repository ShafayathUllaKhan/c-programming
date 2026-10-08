#include <stdio.h>

int main(void)
{
    FILE *fptr;
    fptr = fopen("/home/shafayath/Documents/my work/module_2.txt","w");
    // w r a fgetc(fptr) fputc('A',fptr)
    // char ch;
    // fscanf(fptr,"%c",&ch);
    // printf("character = %c\n",ch);
    // fscanf(fptr,"%c",&ch);
    // printf("character = %c\n",ch);
    // fscanf(fptr,"%c",&ch);
    // printf("character = %c\n",ch);
    // fscanf(fptr,"%c",&ch);
    // printf("character = %c\n",ch);
    // fscanf(fptr,"%c",&ch);
    // printf("character = %c\n",ch);

    // fprintf(fptr,"%c",'M');
    // fprintf(fptr,"%c",'A');
    // fprintf(fptr,"%c",'N');
    // fprintf(fptr,"%c",'G');
    // fprintf(fptr,"%c",'O');

    // printf("%c\n",fgetc(fptr));
    // printf("%c\n",fgetc(fptr));
    // printf("%c\n",fgetc(fptr));
    // printf("%c\n",fgetc(fptr));

    fputc('M',fptr);
    fputc('A',fptr);
    fputc('N',fptr);
    fputc('G',fptr);
    fputc('A',fptr);
    fclose(fptr);
    return 0;
}
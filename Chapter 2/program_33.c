#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch[] = {'a','b','c','d'};

    char s1[] = "coding";

    // convert the string to uppercase and print it
    for (int i = 0; s1[i] != '\0'; i++)
    {
        printf("%c",toupper((unsigned char)s1[i]));
    }
    printf("\n");

    // print the character at index 2
    printf("%c\n",s1[2]); 
    
    return 0;
}
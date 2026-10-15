#include <stdio.h>
#include <string.h>
// print substring
int main(void)
{
    char str[] = "pqrs";
    int length = (int)strlen(str);
    int count = 0;

    for (int i = 0; i < length; i++)
    {
        for(int j =0;j<length-i;j++){
            int sublength = j + 1;
            printf("%.*s\n",sublength,str + i);
// 1. The %.*s Format Specifier

// Normally, %s tells printf to print a string until it hits the hidden null terminator (\0).
// By adding .* (a dot and an asterisk), you are telling printf: "Do not wait for the \0. I am going to pass an integer to tell you exactly how many characters to limit the print to."

// 2. The Arguments Placed Inside

// Because of the asterisk (*), printf now expects two arguments instead of just one:
// • sub_length: This fills the *. It is an integer specifying the exact number of characters to print.
// • str + i: This is the starting address in memory. It tells printf to skip the first i characters of the string str and start reading from that exact point.
            count++;
        }
    }
    printf("The total substring is %d\n",count);
    return 0;
}
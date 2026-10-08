#include <stdio.h>

int main(void)
{
    char *string_v = "Hello World";

    // this works perfectly because string_v is an address
    // puts() function writes a string to the output screen and automatically adds a newline character (\0 to \n) at the end
    // puts expects address
    puts(string_v);

    // it is exactly equivalent to:
    // printf("%s\n", string_v);

    // A buffer that can only hold 9 characters plus the null terminator (\0)
    char buffer[10];

    printf("Enter your name:\n");

    // Dangerous: reads input until you press enter, ignoring the size limit
    // it gives you error as modern c compilers blocked gets gcc gnu compiler collection
    // gets(buffer);

    // fgets expects and address in first argument and size of fget and array size should be same
    fgets(buffer,sizeof(buffer),stdin);

    printf("Buffer content: %s\n",buffer);

    return 0;
}
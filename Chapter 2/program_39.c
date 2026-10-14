#include <stdio.h>
#include <string.h>
int main(void)
{
    char str[] = "madam";
    char reversed[100];

    strcpy(reversed,str);

    int len = (int)strlen(reversed);


// 1. What does strlen() actually return?

// The strlen() function does not return an int. It returns a data type called size_t.
// • size_t is an unsigned integer type (it can never be negative) explicitly designed to handle the maximum possible size of any object or array in memory.
// • On modern 64-bit computers, size_t is 64 bits (8 bytes) wide.

// 2. The Size Mismatch

// An int in C is typically only 32 bits (4 bytes) wide on almost all modern platforms.
// When you try to store a 64-bit number inside a 32-bit container without a cast:
// c
// int length = strlen(reversed); // ❌ Causes a compiler warning
// Use code with caution.
// The compiler looks at this and worries: "What if the string is so massive that the number doesn't fit into 32 bits? The top half of the number will be chopped off!" To warn you about this potential data loss, it throws a warning like: "implicit conversion loses integer precision".

// 3. What (int) does

// Adding (int) is your way of telling the compiler:
// "Dear compiler, I know strlen returns a giant 64-bit size_t number. However, I am 100% sure my reversed string is relatively short and will easily fit inside a standard 32-bit integer. Please mute the warning and convert it anyway."


    for (int  i = 0; i < len; i++)
    {
        int temp = reversed[i];
        reversed[i] = reversed[len-1-i];
        reversed[len-1-i] = temp;
    }

    printf("%s\n",reversed);

    if(strcmp(str,reversed) == 0){
        printf("Palindrome\n");
    }else{
        printf("not palindrome\n");
    }
    return 0;
}
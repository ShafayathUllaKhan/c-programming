#include <stdio.h>

int main(void)
{
    char ch[] = {'a','b','c','d','e','\0'};

    // Print the array's characters
    printf("Array contents : %s\n",ch);

    // Print the array's address
    printf("Array address: %p\n",ch);
    printf("Array address: %p\n",(void *)ch);// (void *) is used to take any address and convert it to void address

    // A pointer to a string literal
    const char *str = "Java";
    printf("String reference: %p\n",(void *)str);

    // Assign a different string literal
    str = "Java1";
    printf("String new reference: %p\n",(void *)str);

    // Modify the existing character array
    ch[4] = 'l';
    printf("Modified array: %s\n",ch);

    // The array itself is still at the same address
    printf("Array address after modification: %p\n",(void *)ch);

//     1. Understand the declaration
// Read this from right to left:
// const char *str;


// - str is a pointer.
// - It points to a char.
// - The const means you cannot modify the character through this pointer.
// So, these are different operations:
// const char *str = "Java";

// str = "Java1";  // ✅ Allowed: change the pointer's target

// str[0] = 'j';   // ❌ Not allowed: modify a character through str

    return 0;
}
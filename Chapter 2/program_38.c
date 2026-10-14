#include <stdio.h>
#include <string.h>
int main(void)
{
    // string literals
    const char *s1 = "Java";
    const char *s2 = "java";
    const char *s3 = "Java";

    // character arrays containing copies of the text
    char str1[] = "Java";
    char str2[] = "Java";
    char str3[] = "java";

    // compare addresses (not string contents)
    printf("%d\n",s1 == s3);
    printf("%d\n",s1 == s2);

    // Arrays have distinct addresses
    printf("%d\n", str1 == str2);

    // pointer versus array address
    printf("%d\n", (void *)str1 == (void *)s1);

    printf("%d\n", (void *)str3 == (void *)s2);

    // compare string contents
    printf("campare %d\n", strcmp(str1, str2) == 0);

    printf("%d\n",strcmp(str1, s1) == 0);// strcmp returns 0 if string is same
    printf("%d\n",strcmp(str3, s2) == 0);

    strcmp("Apple", "Banana"); // Returns a NEGATIVE number (e.g., -1)
// Use code with caution.
// • Why: It checks the first letters: 'A' (ASCII 65) vs 'B' (ASCII 66).
// • The Math: It subtracts the second value from the first: \(65 - 66 = -1\). Because \(-1\) is negative, C knows "Apple" is alphabetically earlier.

// 2. If string1 is alphabetically LATER \(\rightarrow \) Returns a POSITIVE number

// If the first string comes after the second string in the dictionary, the math flips.
// c
strcmp("Banana", "Apple"); // Returns a POSITIVE number (e.g., 1)
// Use code with caution.
// • Why: It checks the first letters: 'B' (ASCII 66) vs 'A' (ASCII 65).
// • The Math: \(66 - 65 = 1\). Because \(1\) is positive, C knows "Banana" is alphabetically later.


// 1. The == Operator Compares Addresses (Not Text)

// When you use == between two pointers in C, you are not asking: "Is the text inside them identical?"
// Instead, you are asking: "Are these two variables looking at the exact same house number in memory?"

// 2. String Pooling (String Optimization)

// When your computer compiles this code, it notices that you wrote the exact same read-only string literal "Java" twice (for s1 and s3).
// To save RAM, the compiler performs a trick called String Pooling:
// • It creates only one copy of "Java" in the read-only memory section.
// • It assigns that exact same starting memory address to both s1 and s3.

// Visualizing Memory

// Imagine the string "Java" is placed at memory address 0x5000:

// Address	0x5000	0x5001	0x5002	0x5003	0x5004
// Data	'J'	'a'	'v'	'a'	'\0'

// Because of String Pooling, your pointer variables look like this:
// • s1 contains the address 0x5000
// • s3 contains the address 0x5000
// When the code runs s1 == s3, it evaluates to 0x5000 == 0x5000, which is true (1).

    return 0;
}
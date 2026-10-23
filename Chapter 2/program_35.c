#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void)
{
    char str[] = "   coding is good   ";

    // length()
    printf("%zu\n",strlen(str));

    char str1[] = "hi";
    printf("%zu\n",strlen(str1));// this give value 2 and sizeof gives three beacuse it counts null value

    int start = 0, end = strlen(str)-1;

   while(str[start] != '\0' && isspace((unsigned char)str[start])){

// What isspace() Checks For

// It returns a non-zero value (true) if the character is any of the following standard whitespace characters:
// • Space (' ')
// • Horizontal tab ('\t')
// • Newline ('\n')
// • Vertical tab ('\v')
// • Form feed ('\f')
// • Carriage return ('\r')
// It returns 0 (false) if the character is anything else.


    start++;
   }

   while (end >= start && isspace((unsigned char)str[end]))
   {
    end--;
   }

   printf("%.*s\n",end-start+1,str+start);

   //    The statement printf("%.*s\n", end - start + 1, str + start); prints a substring of str from index start to end without needing to allocate a new buffer or add a temporary null terminator ('\0').

// Breakdown of the Code

// • %.*s: The .* dynamically sets the string precision (maximum number of characters to print) using an integer argument. The s tells printf to treat the argument as a character string.
// • end - start + 1: Calculates the exact length (number of characters) of the slice you want to print. This value is passed into the * precision field.
// • str + start: A pointer to the starting character of the substring in the array str.
// • \n: Prints a newline character at the end of the output.

   char str2[] = "coding ninjas";

   printf("%s\n",str2 + 5);

   /* substring(7, 9): end index is exclusive */
   printf("%.*s\n",(9-7)+1,str2+7);



   char replace[sizeof(str2)];
   strcpy(replace,str2);

   for (int i = 0; replace[i] != '\0'; i++)
   {
     if(replace[i]=='o'){
        replace[i] = '@';
     }
   }

   printf("%s\n",replace);

    /* indexOf('o', 5) */

   char *found = strchr(str2+5,'o'); // from index 5 it search for first 0
   printf("%td\n",found ? found - str2 : -1);//found - str2 this will subtract the addres and give single digit number

   char *foundlastindex = strrchr(str2+5,'n');
   printf("%td\n",foundlastindex ? foundlastindex - str2 : -1);

   char s1[] = "Hello";
   char s2[] = "hello";

    printf("%s\n", strcmp(s1, s2) == 0 ? "true" : "false");
   // • strcmp(s1, s2): Compares the two strings character by character.
	// • It returns 0 if the strings are equal.
	// • It returns a non-zero value (negative or positive) if they are not equal.

    /* compareTo() */
    printf("%d\n", strcmp(s2, s1));
    
   return 0;
}
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
    start++;
   }

   while (end >= start && isspace((unsigned char)str[end]))
   {
    end--;
   }

   printf("%.*s\n",end-start+1,str+start);

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
   printf("%td\n",found ? found - str2 : -1);

   char *foundlastindex = strrchr(str2+5,'n');
   printf("%td\n",foundlastindex ? foundlastindex - str2 : -1);

   char s1[] = "Hello";
   char s2[] = "hello";

    printf("%s\n", strcmp(s1, s2) == 0 ? "true" : "false");

    /* compareTo() */
    printf("%d\n", strcmp(s2, s1));
    
   return 0;
}
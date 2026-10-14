#include <stdio.h>
#include <string.h>
int main(void)
{
    char str[200];
    char str1[100];
    char str2[100];

    // read a complete line
    //fgets(str,sizeof(str),stdin);

    str[strcspn(str,"\n")] = '\0';

    //printf("%s",str);

    // Read the next word
    scanf("%99s",str1);
    printf("%s",str1);
    // first scan takes only hello and world is in input buffer second scan take "world" and puts in to str2
    // read another word
    scanf("%99s", str2);
    printf("%s\n",str2);

    return 0;
}
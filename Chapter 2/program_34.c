#include <stdio.h>

int main(void)
{
    // 1.assign a string 
    char s1[] = "welcome";
    printf("%s\n",s1);

    // 2. creating a string from a string literal
    char str[] = "coding";

    // 3. creating a string from a character array
    char ch[] = {'n','i','n','j','a','s'};

    char str2[sizeof(ch)];

    for (int i = 0; i < sizeof(ch); i++)
    {
        str2[i] = ch[i];
    }

    // 4. Creating a string from a byte array
    unsigned char b[] = {97, 98, 99, 100, 101};
    char str3[sizeof(b) + 1];
    
    for (int i = 0; i < sizeof(b); i++)
    {
        str3[i] = (char) b[i];
    }

    str3[sizeof(b)] = '\0';

    printf("%s",str);
    printf("%s",str2);
    printf("%s",str3);

    return 0;
}
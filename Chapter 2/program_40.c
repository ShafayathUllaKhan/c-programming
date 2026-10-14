#include <stdio.h>
#include <string.h>
int main(void)
{
    char str[100];

    if (fgets(str,sizeof(str),stdin)== NULL){
        return 1;
    }

    str[strcspn(str,"\n")] = '\0';

    int left = 0;
    int right = ((int)strlen(str)) -1;// strlen does not count \0 and it will count \n

    while (left < right)
    {
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        left++;
        right--;
    }
    
    printf("%s",str);
    
    return 0;
}
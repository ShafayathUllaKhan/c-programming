#include <stdio.h>
#include <string.h>
// number of words
int main(void)
{
    char str[500];
    int count = 0;

    printf("Enter the sentence \n");

    if(fgets(str,sizeof(str),stdin) == NULL){
        return 1;
    }

    str[strcspn(str,"\n")] = '\0';

    // Method 1: count spaces
    for(int i=0;str[i] != '\0'; i++){
        if(str[i]== ' '){
            count++;
        }
    }

    count++;

    printf("The number of words are %d\n", count);

    // Method 2 : count words by detecting transitions means by words not by spaces

    int words = 0;
    int insideWords = 0;

    for(int i=0;str[i] != '\0';i++){
        if(str[i] != ' ' && insideWords == 0){
            words++;
            insideWords++;
        }else if(str[i] == ' '){
            insideWords = 0;
        }
    }

    printf("The number of words are %d\n",words);
    return 0;
}
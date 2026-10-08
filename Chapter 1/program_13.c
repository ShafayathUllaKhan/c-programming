#include <stdio.h>

int main(void)
{
    float *ptr;
    ptr = (float *) calloc(5,sizeof(float));

    for(int i=0; i<5; i++){
        printf("%f\n", ptr[i]);
    }

    free(ptr);
    return 0;
}
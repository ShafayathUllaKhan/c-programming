#include <stdio.h>

// rotate array from number of rotation 
int main(void)
{
    int dir,x;
    printf("Enter 0 to rotate right and 1 to rotate left\n");
    scanf("%d",&dir);

    printf("Enter number of rotations\n");
    scanf("%d",&x);

    int a[] = {1,2,3,4,5,6,7,8};
    int len = sizeof(a)/sizeof(a[0]);
    int b[len];

    x = x % len;

    if(dir == 0){
        for (int i = 0; i < len ;i++)
        {
            b[(i + x) % len] = a[i];
        }
    }else{
        for (int i = 0; i < len ;i++)
        {
            b[i] = a[(i+x)%len];
        }
    }

    printf("Orginal array\n");

     for (int i = 0; i < len ;i++)
        {
           printf("%d\n",a[i]);
        }

     printf("rotated array\n");
        for (int i = 0; i < len ;i++)
        {
           printf("%d",b[i]);
        }


    return 0;
}
#include <stdio.h>
#include <string.h>

int main(void)
{
    char sb[100] = "hello";

    size_t length = strlen(sb);
    size_t capacity = sizeof(sb);

    printf("length : %zu\n",length);
    printf("cpacity : %zu\n",capacity);

    strcat(sb," world");// it add text after \0 if empty need to initialize

    printf("Modified string: %s\n",sb);
    printf("Length after append: %zu\n", strlen(sb));
    printf("Capacity after append: %zu\n",sizeof(sb));// is 100 because it is calulating 1 * 100
    return 0;
}
// C data type	Typical size on a 64-bit Linux system
// char	1 byte
// short	2 bytes
// int	4 bytes
// long	8 bytes
// long long	8 bytes
// float	4 bytes
// double	8 bytes
// size_t	8 bytes
// Pointer (char *, int *, etc.)	8 bytes
#include <stdio.h>
int y = 1;
int main()
{
    int x = 0;
    int z = 0;

    printf("X is stored at %p\n", &x);
    printf("Z is stored at %p\n", &z);
    printf("Y is stored at %p\n", &y);

    return 0;

}

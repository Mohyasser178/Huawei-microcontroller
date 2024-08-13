#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 0b00101111;

    printf("x = %d",x);
       x |= (1<<4);
    printf("\nx after set bit 4 is = %d" , x);
       x &= ~(1<<2);
    printf("\nx after rest bit 2 is = %d" , x);
       x ^= (1<<6);
    printf("\nx after rest bit 6 is = %d" , x);

    return 0;
}

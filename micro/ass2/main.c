#include <stdio.h>
#include <stdlib.h>


void set_bit(int *var, int bit_num);
void reset_bit(int *var, int bit_num);
void toggle_bit(int *var, int bit_num);
int read_bit(int var, int bit_num);

int main() {
    int x = 0b00101111;
     printf("Number before operations %x\n",x);

    set_bit(&x, 5);
    int s = read_bit(x, 5);
    printf("Bit number 5 after set is: %x\n", s);

    reset_bit(&x, 5);
    int r = read_bit(x, 5);
    printf("Bit number 5 after reset is: %x\n", r);

    toggle_bit(&x, 5);
    int t = read_bit(x, 5);
    printf("Bit number 5 after toggle is: %x\n", t);

    return 0;
}

void set_bit(int *var, int bit_num)
{
    *var |= (1<<bit_num);
}

void reset_bit(int *var, int bit_num)
{
    *var &= ~(1<<bit_num);
}

void toggle_bit(int *var, int bit_num)
{
    *var ^= (1<<bit_num);
}

int read_bit(int var, int bit_num)
{
    return (var>>bit_num) & 1;
}

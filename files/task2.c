#include <stdio.h>

int toggleBit(int num, int bit)
{
    return num ^ (1 << bit);
}



int main()
{
    int number = 10;
    int bit = 1;
    number = toggleBit(number, bit);

    printf("Result = %d\n", number);
    return 0;
}

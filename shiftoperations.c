#include <stdio.h>

int main() 
{
    int a = 40;
    int b = 3;

    printf("And operation is: %d\n", a & b);
    printf("Or operation is: %d\n", a | b);
    printf("Xor operation is: %d\n", a ^ b);
    printf("Not operation on a is: %d\n", ~a);
    printf("Left shift operation is: %d\n", a << b);
    printf("Right shift operation is: %d\n", a >> b);

    return 0;
}
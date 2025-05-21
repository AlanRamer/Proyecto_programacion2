#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, suma;

    printf("Introduce el primer número: ");
    scanf("%d", &a);

    printf("Introduce el segundo número: ");
    scanf("%d", &b);

    suma = a + b;
    printf("%d + %d = %d\n", a, b, suma);

    return 0;
}
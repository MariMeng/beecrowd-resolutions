#include <stdio.h>

int main()
{
    int n, aux;
    scanf("%d", &n);
    int hora, min, sec;

    hora = n / 3600;
    aux = n % 3600;
    min = aux / 60;
    sec = aux % 60;

    printf("%d:%d:%d\n", hora, min, sec);

    return 0;
}

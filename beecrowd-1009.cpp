#include <stdio.h>

int main()
{

    char nome[30];
    double fixo;
    double salario;
    fflush(stdin);
    gets(nome);
    scanf("%lf", &fixo);
    scanf("%lf", &salario);
    double total = fixo + (salario * 0.15);
    printf("TOTAL = R$ %.2lf\n", total);

    return 0;
}

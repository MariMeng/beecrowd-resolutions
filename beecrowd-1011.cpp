#include <stdio.h>
#include <math.h>

int main()
{
    double num;

    double pi = 3.14159;
    scanf("%lf", &num);
    double resul;
    resul = (4.0 / 3) * pi * pow(num, 3);
    printf("VOLUME : %.3lf\n", resul);
}

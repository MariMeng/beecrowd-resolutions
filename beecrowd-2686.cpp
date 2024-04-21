#include <bits/stdc++.h>
using namespace std;

int main()
{
    float x;
    while (scanf("%f", &x) != EOF)
    {
        if (x >= 1 && x <= 90)
        {
            printf("Bom Dia!!\n");
        }
        else if (x > 90 && x < 180)
        {
            printf("Boa Tarde!!\n");
        }
        else if (x >= 80 && x < 270)
        {
            printf("Boa Noite!!\n");
        }
        else
        {
            printf("De Madrugada!!\n");
        }
    }

    return 0;
}
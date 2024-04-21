#include <bits/stdc++.h>
using namespace std;

int main()
{
    float a, b, c, d;
    float media, exame;
    cin >> a >> b >> c >> d;
    media = (a * 2 + b * 3 + c * 4 + d * 1) / 10;
    printf("Media: %.1f\n", media);
    if (media > 4.9 && media < 6)
    {
        printf("Aluno em exame.\n");
        cin >> exame;
        printf("Nota do exame: %.1f\n", exame);
        if ((exame + media) / 2 >= 5)
            printf("Aluno aprovado.\n");
        else
            printf("Aluno reprovado.\n");
        printf("Media final: %.1f\n", (exame + media) / 2);
    }
    else if (media < 4.9)
        printf("Aluno reprovado.\n");
    else
        printf("Aluno aprovado.\n");
    return 0;
}
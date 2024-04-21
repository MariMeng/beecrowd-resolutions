#include <stdio.h>

int main()
{

    int inicio, fim;
    int durac = 0;
    scanf("%d", &inicio);
    scanf("%d", &fim);
    //	int i = inicio;

    //	while(i != fim){
    //		if(i == 24)
    //		i = 0;
    //		durac++;
    //		i++;
    //	}

    if (fim == inicio)
    {
        durac = 24;
    }
    else if (fim > inicio)
    {
        durac = fim - inicio;
    }
    else if (fim < inicio)
    {
        durac = (24 - inicio) + fim;
    }

    printf("O JOGO DUROU %d HORA(S)\n", durac);
    return 0;
}

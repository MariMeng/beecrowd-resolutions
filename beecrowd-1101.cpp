#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, j;
    int maior = 0, menor = 0;
    int soma = 0;

    while (i > 0 || j > 0)
    {
        soma = 0;
        cin >> i >> j;

        if (i <= 0 || j <= 0)
        {
            return 0;
        }

        if (i < j)
        {
            maior = j;
            menor = i;
        }
        else
        {
            maior = i;
            menor = j;
        }

        for (int i = menor; i <= maior; i++)
        {
            soma += i;
            cout << i << " ";
        }

        cout << "Sum=" << soma << endl;
    }

    return 0;
}
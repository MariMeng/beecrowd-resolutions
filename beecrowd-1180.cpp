#include <bits/stdc++.h>

using namespace std;

int main()
{
    int op;
    cin >> op;
    int array[op];
    int menor = 1000;
    int pos = 0;

    for (int i = 0; i < op; i++)
    {
        cin >> array[i];
        if (array[i] < menor)
        {
            menor = array[i];
            pos = i;
        }
    }

    cout << "Menor valor: " << menor << endl;
    cout << "Posicao: " << pos << endl;

    return 0;
}
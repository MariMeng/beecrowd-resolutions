#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int tam, tam2;
    cin >> n;
    string a, b;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        tam = b.size();

        if (int(a.size()) >= int(b.size()))
        {
            tam2 = a.size() - tam;
            if (b == a.substr(tam2, a.size()))
                cout << "encaixa\n";
            else
                cout << "nao encaixa\n";
        }
        else
            cout << "nao encaixa\n";
    }

    return 0;
}
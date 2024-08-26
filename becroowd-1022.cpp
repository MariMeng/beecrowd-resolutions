#include <bits/stdc++.h>

using namespace std;

int main()
{
    string entrada;
    int n1, d1, n2, d2;
    int op;

    getline(cin, entrada);
    istringstream p(entrada);
    string palavra;
    vector<string> palavras;
    int d, n;

    while (p >> palavra)
    {
        palavras.push_back(palavra);
    }

    n1 = stoi(palavras[0]);
    d1 = stoi(palavras[2]);
    n2 = stoi(palavras[4]);
    d2 = stoi(palavras[6]);

    if (palavras[3] == "+")
    {
        n = (n1 * d2) + (n2 * d1);
        d = d1 * d2;
        cout << n << "/" << d << " = ";
    }
    else if (palavras[3] == "-")
    {
        n = (n1 * d2) - (n2 * d1);
        d = d1 * d2;
        cout << n << "/" << d << " = ";
    }
    else if (palavras[3] == "*")
    {
        n = (n1 * n2);
        d = d1 * d2;
        cout << n << "/" << d << " = ";
    }
    else
    {
        n = n1 * d2;
        d = n2 * d1;
        cout << n << "/" << d << " = ";
    }

    bool v = true;
    while (v)
    {
        cout << "entrou";

        if ((d + n) / 2 == 0)
        {
            d = (d / 2);
            n = (n / 2);
            cout << "oi";
        }
        else if (((d / 2) == 1) && ((n / 2) == 1))
        {
            d = d / 3;
            n = n / 3;
            cout << "oi";
        }
        else
            v = false;
    }
    cout << n << "/" << d;
    return 0;
}

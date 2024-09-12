#include <bits/stdc++.h>

using namespace std;

int main()
{
    int v, p;
    int caminho;
    float resul;
    int resul_int;
    cin >> v >> p;
    caminho = v * p;

    for (float i = 0.5; i < 1.0; i += 0.1)
    {
        resul = (caminho * i);
        resul_int = (caminho * i);

        //  cout << ceil(caminho * i) << " ";
        if (static_cast<float>((resul_int)) == static_cast<int>(resul))
        {
            cout << resul_int << " ";
        }
        // else
        //  cout << resul << " ";
    }

    cout << endl;

    return 1;
}
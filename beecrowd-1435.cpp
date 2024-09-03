#include <bits/stdc++.h>

using namespace std;

int main()
{
    int op = -1;

    while (op != 0)
    {
        cin >> op;

        if (op == 0)
            return 0;

        int mat[op][op];

        for (int i = 0; i < op; i++)
        {
            for (int j = 0; j < op; j++)
            {
                if (i == 0 || j == 0 || i == (op - 1) || j == (op - 1))
                    mat[i][j] = 1;
                else
                    mat[i][j] = 2;
            }
        }

        for (int i = 0; i < op; i++)
        {
            for (int j = 0; j < op; j++)
            {
                cout << "   " << mat[i][j];
            }
            cout << endl;
        }
    }

    return 0;
}
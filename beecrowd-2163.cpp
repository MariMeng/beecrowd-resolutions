#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;

    int mat[x][y];

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cin >> mat[i][j];
        }
    }

    for (int i = 1; i < x - 1; i++)
    {
        for (int j = 1; j < y - 1; j++)
        {
            if (mat[i][j] == 42)
            {
                if (mat[i - 1][j - 1] == 7 && mat[i - 1][j] == 7 && mat[i - 1][j + 1] == 7 &&
                    mat[i][j - 1] == 7 && mat[i][j + 1] == 7 &&
                    mat[i + 1][j - 1] == 7 && mat[i + 1][j] == 7 && mat[i + 1][j + 1] == 7)
                {
                    cout << i + 1 << " " << j + 1 << endl;
                    return 0;
                }
            }
        }
    }

    cout << "0 0" << endl;
    return 0;
}

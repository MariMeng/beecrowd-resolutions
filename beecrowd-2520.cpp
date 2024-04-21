#include <bits/stdc++.h>

using namespace std;
int main()
{
    int x, y;
    int x1, x2, y2, y1;
    while (scanf("%d %d", &x, &y) != EOF)
    {
        int m[x][y];
        for (int i = 0; i < x; i++)
        {
            for (int z = 0; z < y; z++)
            {
                cin >> m[i][z];
                if (m[i][z] == 1)
                {
                    x1 = i + 1;
                    y1 = z + 1;
                }
                else if (m[i][z] == 2)
                {
                    x2 = i + 1;
                    y2 = z + 1;
                }
            }
        }
        int res = 0;
        res = abs(x2 - x1) + abs(y2 - y1);
        printf("%d\n", res);
    }
    return 0;
}
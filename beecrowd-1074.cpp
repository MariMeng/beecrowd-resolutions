#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        cin >> y;
        if (y == 0)
            printf("NULL\n");
        else if (y > 0 && (y % 2) == 0)
            printf("EVEN POSITIVE\n");
        else if (y > 0 && (y % 2) != 0)
            printf("ODD POSITIVE\n");
        else if (y < 0 && (y % 2) == 0)
            printf("EVEN NEGATIVE\n");
        else
            printf("ODD NEGATIVE\n");
    }
    return 0;
}
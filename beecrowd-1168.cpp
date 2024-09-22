#include <bits/stdc++.h>

using namespace std;

int main()
{
    string e;
    int op;
    int res = 0;

    cin >> op;

    for (int i = 0; i < op; i++)
    {
        cin >> e;
        for (int i = 0; i < e.size(); i++)
        {
            if (e[i] == '1')
                res += 2;
            else if (e[i] == '2' || e[i] == '3' || e[i] == '5')
                res += 5;
            else if (e[i] == '4')
                res += 4;
            else if (e[i] == '7')
                res += 3;
            else if (e[i] == '8')
                res += 7;
            else if (e[i] == '9' || e[i] == '0' || e[i] == '6')
                res += 6;
        }

        cout << res << " leds " << endl;
        res = 0;
    }

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string n, d;
    cin >> n >> d;
    long long r;

    while (n != "0" && d != "0")
    {

        d.erase(remove(d.begin(), d.end(), n[0]), d.end());
        if (d == "")
        {
            d = "0";
        }

        if (d[0] == '0')
        {
            r = stoi(d);
            cout << r << endl;
        }
        else
            cout << d << endl;

        cin >> n >> d;
    }

    return 0;
}
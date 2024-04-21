#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, tam;
    string s;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        getline(cin, s);
        for (int z = 0; z < int(s.size()); z++)
        {
            if (isalpha(s[z]))
                s[z] = char(s[z] + 3);
        }
        reverse(s.begin(), s.end());
        tam = ((s.size() / 2));
        for (int z = tam; z < int(s.size()); z++)
        {
            s[z] = char(s[z] - 1);
        }
        cout << s << endl;
    }

    return 0;
}
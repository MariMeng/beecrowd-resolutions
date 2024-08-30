#include <bits/stdc++.h>

using namespace std;

int main()
{
    string entrada;

    getline(cin, entrada);

    if (entrada.length() > 140)
        cout << "MUTE" << endl;
    else
        cout << "TWEET" << endl;
    return 0;
}
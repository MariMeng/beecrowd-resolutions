#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num;
    int j = 1;
    vector<int> v;
    while (scanf("%d", &num) != EOF)
    {
        for (int i = 0; i <= num; i++)
        {
            for (int z = i; z < (i + i); z++)
            {
                v.push_back(i);
            }
        }
        if (num == 0)
            cout << "Caso " << j << ": 1 numero\n";

        else
            cout << "Caso " << j << ": " << v.size() + 1 << " numeros\n";
        cout << "0";
        for (auto elem : v)
            cout << " " << elem;
        cout << endl;
        v.clear();
        j++;
    }

    return 0;
}

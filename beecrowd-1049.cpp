#include <iostream>
using namespace std;
int main()
{
    string a, b, c;
    cin >> a >> b >> c;
    if (a.compare("invertebrado") == 0)
    {
        if (b.compare("inseto") == 0)
        {
            if (c.compare("hematofago") == 0)
                printf("pulga\n");
            else
                printf("lagarta\n");
        }
        else
        {
            if (c.compare("onivoro") == 0)
                printf("minhoca\n");
            else
            {
                printf("sanquessuga\n");
            }
        }
    }
    else
    {
        if (b.compare("ave") == 0)
        {
            if (c.compare("carnivoro") == 0)
                printf("aguia\n");
            else
                printf("pomba\n");
        }
        else
        {
            if (c.compare("onivoro") == 0)
                printf("homem\n");
            else
                printf("vaca\n");
        }
    }

    return 0;
}
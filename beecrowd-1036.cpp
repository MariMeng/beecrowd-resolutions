#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c;
    double delta;
    double r1, r2;
    cin >> a >> b >> c;
    delta = pow(b, 2) - (4 * (a * c));
    if (delta <= 0 || (2 * a) == 0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        r1 = (-(b)-sqrt(delta)) / (2 * a);
        r2 = (-(b) + sqrt(delta)) / (2 * a);
        printf("R1 = %.5f\n", r2);
        printf("R2 = %.5f\n", r1);
    }
    return 0;
}

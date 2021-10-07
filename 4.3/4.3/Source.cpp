#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double xp, xk, dx, a, b, c;
    double F;

    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;

    cout << fixed;
    cout << "----------------------" << endl;
    cout << "|" << setw(9) << "x |" << setw(12) << "y |" << endl;
    cout << "----------------------" << endl;


    for (double x = xp; x <= xk; x += dx)
    {
        if ((x < 0) && (b != 0))
            F = (a * x * x) - (b * x * x);
        else
           if ((x > 0) && (b == 0))
            F = (x - a) / (x - c);
           else
            F = (x + 5) / (c * (x - 10));
       

        cout << "|" << setw(7) << setprecision(3) << x << " |"
            << setw(10) << setprecision(3) << F << " |" << endl;
    }
    cout << "----------------------" << endl;

    return 0;
}

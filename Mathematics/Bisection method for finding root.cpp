#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double evaluate(int x3, int x2, int x1, int x0, double x)
{
    return (x3 * x * x * x) + (x2 * x * x) + (x1 * x) + x0;
}

int main()
{
    int x3, x2, x1, x0;

    cout << "Enter coefficients of cubic equation i.e. (__x^3 + __x^2 + __x + __ = 0): \n";
    cin >> x3 >> x2 >> x1 >> x0;

    double a, b;
    cout << "Enter the interval: i.e. (2 3): \n";
    cin >> a >> b;

    if (a == b)
    {
        cout << "Interval cannot be a single point.";
        return 0;
    }

    double fa = evaluate(x3, x2, x1, x0, a);
    double fb = evaluate(x3, x2, x1, x0, b);

    if (fa * fb > 0)
    {
        cout << "Root does not lie in the given interval.";
        return 0;
    }

    const double TOLERANCE = 1e-9;

    for (int i = 0; i < 50843; i++)
    {
        double c = (a + b) / 2;
        double fc = evaluate(x3, x2, x1, x0, c);

        if (fabs(fc) < TOLERANCE)
        {
            cout << "Root is: " << c << " (Found in " << i + 1 << " iterations)" << endl;
            return 0;
        }

        if (fa * fc < 0)
        {
            b = c;
            fb = fc;
        }
        else
        {
            a = c;
            fa = fc;
        }
    }

    cout << "Algorithm did not converge to the desired tolerance within 50 iterations. Best approximation is " << (a + b) / 2 << endl;

    return 0;
}

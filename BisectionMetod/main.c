#include <stdio.h>
#include <math.h>

double f(double x)
{
    return pow(2, x) - 5 * x + 2;
}

double bisection(double X0, double X1, double tol)
{
    double X2;

    while (1)
    {
        X2 = (X0 + X1) / 2;
        double Error = fabs(X2 - X0);
        if (Error <= tol)
            break;
        else
        {
            if (f(X2) * f(X1) < 0)
                X0 = X2;
            else if (f(X0) * f(X2) < 0)
                X1 = X2;
            else
            {
                return 0;
            }
        }
    }
    return X2;
}

int main()
{
    double a = 0;
    double b = 1;
    double tol = 0.1;
    double result = bisection(a, b, tol);

    printf("Sonuc = %lf", result);

    return 0;
}

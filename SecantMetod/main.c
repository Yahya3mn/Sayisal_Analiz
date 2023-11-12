#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double Secant(double X0, double X1, double tol)
{
    double X2, Error;
    while(Error>tol)
    {
        X2 = X0 * ((pow(X1,2) - 2) - X1 * (pow(X0,2) - 2)) / ((pow(X1,2) - 2) - (pow(X0,2) - 2));
        Error = fabs(X2 - X1);
        X0 = X1;
        X1 = X2;
    }

    return X2;
}

int main(){
    double a = -1;
    double b = -1.4;

    double tol = 0.01;

    double result = Secant(a,b,tol);

    printf("Result = %.4f",result);

    return 0;
}
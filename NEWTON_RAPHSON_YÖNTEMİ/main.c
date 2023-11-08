#include <stdio.h>
#include <math.h>

double Newton_Raphson(double X0, double epsilon) {
    double X1 = X0, Error;
    do {
        X1 = (X0*X0+6)/(X0*2);
        Error = fabs(X1 - X0);
        X0 = X1;
    } while (Error > epsilon);
    return X1;
}

int main() {
    double X = 3;
    double Eps = 0.01;

    double result = Newton_Raphson(X, Eps);

    printf("Result = %lf", result);

    return 0;
}

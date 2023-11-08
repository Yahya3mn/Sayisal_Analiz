#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*f(x) =  x^2-2 fonksiyonunu bir yaklaşık kökünü Bisection yöntemi ile bulunuz.(4 iterasyon uygulayınız)*/

double f(double x)
{
    return pow(x,2)-2;
}

double Bisection(double X0, double X1){
    double X2;
    int i = 0;
    while(i < 4){
        X2 = (X0+X1)/2;
        if(f(X2) * f(X1) < 0)
        {
            X0 = X2;
        }
        else if(f(X0) * f(X2) < 0){
            X1 = X2;
        }
        else{
            return 0;
        }
        i++;
    }
    return X2;
}

int main()
{
    double a = 1;
    double b = 2;

    double result = Bisection(a, b);

    printf("Result = %.4lf",result);

    return 0;
}
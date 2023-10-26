#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*** f(x) = ln(1+x) fonk.nun maclourin seri a��l�m�n� bulunuz. ilk 10 terim i�in f(0.1) de�erini hesap ediniz  ***/


double maclourinSerisi(double x, int n)
{
    double toplam = 0;
    double isaret = 1;

    for(int i = 1; i <= n; ++i)
    {
        toplam += isaret * pow(x,i) / i;
        isaret = -isaret;
    }

    return toplam;
}



int main()
{
    double x = 0.1;
    int n = 10;


    double sonuc = maclourinSerisi(x,n);

    printf("Sonuc = %.10lf",sonuc);
    return 0;
}

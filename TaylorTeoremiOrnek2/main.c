#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*** (i). f(x) = Cos3x fonk.nun X_0 = 0 noktas� civar�ndaki Taylor seri a��l�m�n� bulunuz. (ilk 6 termini kullan�n�z)
     (ii). (i)'deki bulduklar�n�z� kullanarak, f(0.2) de�erini bulunuz. ***/

int faktoriyel(int k)
{
    if(k==0)
        return 1;
    else
        return k * faktoriyel(k - 1);
}

int main()
{
    double toplam = 0; int n;
    double x = 0.2;
    printf("Kac terim kullanilacak :");
    scanf("%d",&n);

    for(int k = 0; k < n; k++){
        toplam += (pow(-9,k)*pow(x,2*k)) / faktoriyel(2*k);
    }

    printf("Sonuc = %.4lf",toplam);

    return 0;
}

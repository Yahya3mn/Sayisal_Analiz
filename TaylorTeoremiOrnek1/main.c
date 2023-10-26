#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**** (i). f(x) = e^x fonk. nun x_0 = 1 noktasý civarýndaki Taylor seri açýlýmýný bulunuz. (ilk 4 terimini kullanýnýz)
      (ii). (i)'deki bulduklarýnýzý kullanarak, e^1.01 deðerini bulunuz. (e = 2.7183)   ****/

int faktoriyel(int k)
{
    if(k==0)
        return 1;
    else
        return k * faktoriyel(k - 1);
}

double power(double x, int n)
{
    int carpim = 1;
    for(int i = 0;i < n;i++){
        carpim *= x;
    }
    return carpim;
}

int main()
{
    double toplam = 0; int n;
    double x = 1.01, X_0 = 0;

    printf("Kac terim kullanilacak :");
    scanf("%d",&n);
    for(int k=0;k<n+1;k++){
        toplam += power(x-X_0,k) / faktoriyel(k);
    }
    double gercekDeger = exp(x);

    printf("Sonuc = %lf\n",toplam);
    printf("Gercek degeri = %.4lf",gercekDeger);


    return 0;
}

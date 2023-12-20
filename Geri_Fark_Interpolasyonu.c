#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double P3(double x, float x1, float x2, float x3, float y3, float D3, float D2y3, float D3y3){
	return y3 + D3 * (x - x3) + D2y3 * (x - x3) * (x - x2) + D3y3 * (x - x3) * (x - x2) * (x - x1);
}

double f(double x)
{
	return pow(x,3) + x + 1;
}

int main(int argc, char *argv[]) {
	float x[20], y[20][20], G_Deger, Y_Deger, M_Hata;
	int i, j, n;
	
	printf("Kac adet sayi girilecek?\n");
	scanf("%d",&n);
	
	printf("Sayilari giriniz : \n");
	for(i = 0; i < n; i++)
	{
		printf("x[%d] = ", i);
		scanf("%f", &x[i]);
		printf("y[%d] = ", i);
		scanf("%f", &y[i][0]);
	}
	
	 for (i = 1; i < n; i++) {
        for (j = n - 1; j > i - 1; j--) {
            y[j][i] = (y[j][i - 1] - y[j - 1][i - 1]) / (x[j] - x[j - i]);
        }
    }
    
     printf("\nGeri-Fark Tablosu\n\n");
    for (i = 0; i < n; i++) {
        printf("%0.2f", x[i]);
        for (j = 0; j <= i; j++) {
            printf("\t%0.2f", y[i][j]);
        }
        printf("\n");
    }
    
    float Dy3 = y[n-1][1];
    float D2y3 = y[n-1][2];
    float D3y3 = y[n-1][3];
    
    Y_Deger = P3(0.55, x[0], x[1], x[2], y[2][0], Dy3, D2y3, D3y3);
    G_Deger = f(0.55);
    
    printf("\nYaklasik deger : P3(x) = %.4f\n", Y_Deger);
    printf("Gercek deger : f(x) = %.4f\n", G_Deger);
    
    M_Hata = fabs(G_Deger - Y_Deger);
    
    printf("Mutlak hata = %.4f", M_Hata);
	return 0;
}

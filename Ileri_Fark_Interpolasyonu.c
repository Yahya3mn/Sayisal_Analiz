#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
    float x[20], y[20][20];
    int i, j, n;

    
    printf("Kac adet sayi girilecek?\n");
    scanf("%d", &n);
    printf("Enter data:\n");
    for (i = 0; i < n; i++) {
        printf("x[%d]=", i);
        scanf("%f", &x[i]);
        printf("y[%d]=", i);
        scanf("%f", &y[i][0]);
    }

    
    for (i = 1; i < n; i++) {
        for (j = 0; j < n - i; j++) {
            y[j][i] = (y[j + 1][i - 1] - y[j][i - 1]) / (x[j + i] - x[j]);
        }
    }

    
    printf("\nÝleri-Fark Tablosu\n\n");
    for (i = 0; i < n; i++) {
        printf("%0.2f", x[i]);
        for (j = 0; j < n - i; j++) {
            printf("\t%0.2f", y[i][j]);
        }
        printf("\n");
    }

    
    return 0;
}


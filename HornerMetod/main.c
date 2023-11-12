#include <stdio.h>
#include <stdlib.h>

int Horner(int k, int elemanSayisi,int polinom[])
{
    int temp;
    for(int i=0;i <= elemanSayisi-1;i++)
    {
        temp = temp*k + polinom[i];
    }
    return temp;
}



void main(){
    int polinom[] = {1, -4, 7, -5, -2};
    int k = 3;
    int elemanSayisi = 5;

    printf("%d",Horner(k,elemanSayisi,polinom));
}
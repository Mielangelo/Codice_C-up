#include <stdio.h>

int main(){
    int Primo;
    int Secondo;
    float Media;

    printf("\nInserisci il primo numero intero: ");
    scanf("%d", &Primo);

    printf("\nInserisci il secondo numero intero: ");
    scanf("%d", &Secondo);

    Media = (Primo + Secondo) / 2.0;
    printf("\nLa media aritmetica dei due numeri è: %.2f", Media);

    return 0;
}
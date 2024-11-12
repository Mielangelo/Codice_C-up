#include <stdio.h>

int main(){
    int primo;
    int secondo;
    int risultato;

    printf("\nInserisci primo numero: ");
    scanf("%d", &primo);

    printf("\nInserisci secondo numero: ");
    scanf("%d", &secondo);

    risultato = primo * secondo;

    printf("\nIl risultato è: %d * %d = %d\n", primo, secondo, primo * secondo);
    
    return 0;
}
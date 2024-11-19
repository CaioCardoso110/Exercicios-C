#include <stdio.h>
#include <locale.h>

int n1, oposto;
float inverso;

void main(){
    setlocale(LC_ALL, "Portuguese");
    printf("Digite um numero: ");
    scanf("%i", &n1);

    if (n1>0){
        inverso = (float) 1 / (float) n1;
        printf("O inverso de %i é %f", n1, inverso);

} else {
    oposto = -1 * n1;
    printf("O oposto de %i é igual a %i", n1, oposto);

}

}

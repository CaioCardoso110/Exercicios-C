#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){

    int n1, contador, cont = 0;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite um n�mero: ");
    scanf("%i", &n1);

    for (contador = 1; contador <= n1; contador++){
        if (n1 % contador == 0) {
            cont++;
        }
    }
    if (cont == 2){
        printf("O numero %i � primo", n1);
    } else {
        printf("O numero %i n�o � primo", n1);
    }
}

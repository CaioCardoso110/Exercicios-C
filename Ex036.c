#include <stdio.h>
#include <locale.h>

int primeirotermo, razao, contador;

void main(){
    setlocale(LC_ALL, "Portuguese");
    printf("===================================\n");
    printf("\t10 TERMOS DE UMA PA\t\n");
    printf("===================================\n");
    printf("Primeiro termo: ");
    scanf("%i", &primeirotermo);
    printf("Razão: ");
    scanf("%i", &razao);
    for (contador = 0; contador<= 9; contador++)
        {
            printf("%i -> ", primeirotermo + razao * contador);
        }
    printf("Acabou");
}

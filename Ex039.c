#include <stdio.h>
#include <locale.h>

float peso, maiorpeso = 0, menorpeso = 0;
int contador;

void main() {
    setlocale(LC_ALL, "Portuguese");

    for (contador = 1; contador <= 5; contador++){
        printf("Peso da %i° pessoa: ", contador);
        scanf("%f", &peso);
        if (contador == 1){
            maiorpeso = peso;
            menorpeso = peso;
        } else {
            if (peso > maiorpeso){
                maiorpeso = peso;
            }
            if (peso < menorpeso){
                menorpeso = peso;
            }
        }
        }

    printf("\nO maior peso lido foi de %.1fKg\n", maiorpeso);
    printf("O menor peso lido foi de %.1fKg", menorpeso);
}

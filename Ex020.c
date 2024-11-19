#include <stdio.h>
#include <locale.h>

float preco, km;

void main(){
    setlocale(LC_ALL, "Portuguese");
    printf("======\tTABELA DE PREÇOS  =======\n");
    printf("Viagens até 200 km\tR$0.50/km\n");
    printf("A partir de 200 km\tR$0.35/km\n");
    printf("----------------------------------\n");
    printf("Distância total da viagem, em km: ");
    scanf("%f", &km);
    if (km>=200){
        preco = km * 0.35;
        printf("Uma viagem de %.1f km vai custar R$0,35/km\n", km);
        printf("Valor Total: R$%.2f", preco);
    } else {
        preco = km * 0.50;
        printf("Uma viagem de %.1f km vai custar R$0,50/km\n", km);
        printf("Valor Total: R$%.2f", preco);

    }



}

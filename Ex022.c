#include <stdio.h>
#include <locale.h>
#include <time.h>

int din;

void main(){
    time_t t;
    time(&t);
    struct tm* data;
    data = localtime(&t);
    int h = data->tm_hour;
    setlocale(LC_ALL, "Portuguese");
    printf("============= CINEMA ESTUDONAUTA =============\n");
    printf("HORÁRIO DO FILME: 19h - PREÇO DO INGRESSO: R$20\n");
    printf("-----------------------------------------------\n");
    printf("Quanto dinheiro você tem? R$");
    scanf("%i", &din);
    if (din>=20 && h<=19){
        printf("Agora são %i horas.\n", h);
        printf("Você consegue comprar o ingresso!");
    } else {
         printf("Agora são %i horas. \n", h);
         printf("Infelizmente não é possivel comprar o ingresso! \n");
    }




}

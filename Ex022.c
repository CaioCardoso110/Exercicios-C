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
    printf("HOR�RIO DO FILME: 19h - PRE�O DO INGRESSO: R$20\n");
    printf("-----------------------------------------------\n");
    printf("Quanto dinheiro voc� tem? R$");
    scanf("%i", &din);
    if (din>=20 && h<=19){
        printf("Agora s�o %i horas.\n", h);
        printf("Voc� consegue comprar o ingresso!");
    } else {
         printf("Agora s�o %i horas. \n", h);
         printf("Infelizmente n�o � possivel comprar o ingresso! \n");
    }




}

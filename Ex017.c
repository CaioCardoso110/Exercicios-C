#include <stdio.h>
#include <locale.h>
#include <time.h>
int ano, idade;
void main() {
    setlocale(LC_ALL, "Portuguese");
    time_t t;
    time(&t);
    struct tm *data;
    data = localtime(&t);
    int a = data->tm_year + 1900;
    printf("\nEm que ano voc� nasceu? ");
    scanf("%i", &ano);
    idade = a - ano;
    printf("------------------------------------------------\n");
    printf("Voc� tem %i anos, certo?\n", idade);
    printf("Seja bem-vindo(a) ao Banco Estudonauta!\n");
    if (idade>=65){
        printf("=== ATEN��O! DIRIJA-SE PARA A FILA PREFERENCIAL ===\n");
    }
    printf("------------------------------------------------\n");


}

#include <stdio.h>
#include <locale.h>
#include <time.h>
int ano;
void main() {
    setlocale(LC_ALL, "Portuguese");
    printf("Digite um ano qualquer: ");
    scanf("%i", &ano);
    if (ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0) {
        printf("O ano %i é BISSEXTO.", ano);
    } else {
        printf("O ano %i não é BISSEXTO", ano);
    }


}

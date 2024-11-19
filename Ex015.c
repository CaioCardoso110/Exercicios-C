#include <stdio.h>
#include <locale.h>

float n1, n2, m;
void main(){
    setlocale(LC_ALL, "Portuguese");
    printf("Digite a sua primeira nota: ");
    fflush(stdin);
    scanf("%f", &n1);
    printf("Digite a sua segunda nota: ");
    fflush(stdin);
    scanf("%f", &n2);
    m = (n1 + n2) / 2;
    printf("---------------------------------\n");
    if (m>=7) {
        printf("MEUS PARABÉNS! A sua média final foi %.2f\n", m);
    }

    if (m<7) {
    printf("A sua média final foi %.2f\n", m);
    }
    printf("---------------------------------\n");

}

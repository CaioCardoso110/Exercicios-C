#import <stdio.h>
#import <locale.h>
int num1, dobro;
float terca;

void main(){
    setlocale(LC_ALL, "Portuguese");
    printf("<<<Ex007 - Dobro e Ter�a parte >>>\n");
    printf("Digite um n�mero: ");
    scanf("%d", &num1);
    dobro = num1 * 2;
    terca = (float)num1 / 3;
    printf("Analisando o n�mero %i, seu dobro � %i e sua ter�a parte � %.2f\n", num1, dobro, terca);

}

#import <stdio.h>
#import <locale.h>
int num1, dobro;
float terca;

void main(){
    setlocale(LC_ALL, "Portuguese");
    printf("<<<Ex007 - Dobro e Terça parte >>>\n");
    printf("Digite um número: ");
    scanf("%d", &num1);
    dobro = num1 * 2;
    terca = (float)num1 / 3;
    printf("Analisando o número %i, seu dobro é %i e sua terça parte é %.2f\n", num1, dobro, terca);

}

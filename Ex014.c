#import <stdio.h>
#import <locale.h>

int n1, n2, r1, r2;
void main(){
    setlocale(LC_ALL, "Portuguese");
    printf("<<< Ex014 - Operadores de Deslocamento >>>\n\n");
    printf("Digite um n�mero: ");
    scanf("%i", &n1);
    printf("Digite o descolamento: ");
    scanf("%i", &n2);
    printf("------ OPERA��ES SHIFT ------\n\n");
    r1 = n1 >> n2;
    r2 = n1 << n2;
    printf("Calculando %i >> %i � igual a %i\n", n1, n2, r1);
    printf("Calculando %i << %i � igual a %i\n", n1, n2, r2);



}

#import <stdio.h>
#import <locale.h>
int n1, n2, r1, r2, r3;
void main(){
    setlocale(LC_ALL, "Portuguese");
    printf("<<< Ex013 - Operadores Bitwise >>>\n\n");
    printf("Digite o primeiro valor: ");
    scanf("%i", &n1);
    printf("Digite o segundo valor: ");
    scanf("%i", &n2);
    printf("\n\n------ OPERAÇÕES BITWISE ------\n\n");
    r1 = n1 & n2;
    r2 = n1 | n2;
    r3 = n1 ^ n2;
    printf("Calculando %i & %i é igual a %i.\n", n1, n2, r1);
    printf("Calculando %i | %i é igual a %i.\n", n1, n2, r2);
    printf("Calculando %i ^ %i é igual a %i.\n", n1, n2, r3);


}

#import <stdio.h>
#import <locale.h>
int num1;
int n;
int s;
void main(){
    setlocale(LC_ALL, "Portuguese");
    printf("<<<Ex006 - Antecessor e Sucessor>>>\n");
    printf("Digite um n�mero: ");
    scanf("%i", &num1);
    n = num1 - 1;
    s = num1 + 1;
    printf("Analisando o n�mero %i, seu antecessor � %i e seu sucessor � %i.\n", num1, n, s);

}

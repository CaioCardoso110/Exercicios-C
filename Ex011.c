#import <stdio.h>
#import <locale.h>

int num;
int r;

void main(){
    setlocale(LC_ALL, "Portuguese");
    printf("<<< Ex011 - Par ou Ímpar >>>\n\n");
    printf("Digite um número qualquer: ");
    scanf("%d", &num);
    r = num % 2;
    printf("O número que você digitou é %s", (r == 0)?"par":"ímpar");

}

#import <stdio.h>
#import <locale.h>

int num;
int r;

void main(){
    setlocale(LC_ALL, "Portuguese");
    printf("<<< Ex011 - Par ou �mpar >>>\n\n");
    printf("Digite um n�mero qualquer: ");
    scanf("%d", &num);
    r = num % 2;
    printf("O n�mero que voc� digitou � %s", (r == 0)?"par":"�mpar");

}

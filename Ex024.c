#include <stdio.h>
#include <locale.h>

int n1, n2, n3;

void main(){
    setlocale(LC_ALL, "Portuguese");
    printf("Me diga três números e eu colocarei\nos dois em ordem crescente.\n\n");
    printf("Primeiro número: ");
    scanf("%i", &n1);
    printf("Segundo número: ");
    scanf("%i", &n2);
    printf("Terceiro número: ");
    scanf("%i", &n3);
    if (n1<n2 && n2<n3) {
        printf("Os números em ordem são %i, %i e %i", n1, n2, n3);
    } else if (n2<n1 && n1<n3){
        printf("Os números em ordem são %i, %i e %i", n2, n1, n3);
    } else if (n3<n1 && n1<n2){
        printf("Os números em ordem são %i, %i e %i", n3, n1, n2);
    } else if (n3<n2 && n2<n1){
        printf("Os números em ordem são %i, %i e %i", n3, n2, n1);
    } else if (n2<n3 && n3<n1){
        printf("Os números em ordem são %i, %i e %i", n2, n3, n1);
    } else {
        printf("Os números são iguais");
    }
}

#include<stdio.h>
#include<stdlib.h>

int main () {

    int x;
    printf("Digite um valor inteiro: ");
    scanf("%d", &x);
    if ((x%2 ==0) || (x < 0)) {
        printf("o valor eh par ou negativo\n");

    }

    printf("Fim do programa\n");
    system("pause");
    return 0;

}

#include<stdio.h>
#include<stdlib.h>

int main () {

    int x;
    printf("Digite um numero inteiro:");
    scanf("%d", &x);
    if (x%2 == 0)  {

        printf("Seu numero eh par.\n");
    }

    else {
        printf("Seu numero eh impar.\n");
    }

    printf("Fim do programa\n");
    system("pause");
    return 0;

}

#include<stdio.h>
#include<stdlib.h>

int main () {

    int num;
    printf("Digite um numero inteiro:");
    scanf("%d", &num);
    if (num == 0)  {

        printf("Seu numero eh %d.\n", num);
    }

    else {
    if (num < 0) {
        printf("Seu numero eh negativo.\n");
    }

    else{

        printf("Seu numero eh positivo\n");
    }

    }

    system("pause");
    return 0;

}

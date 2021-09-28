#include<stdio.h>
#include<stdlib.h>

int main () {

    int x, y = -1;
    printf("Digite um valor inteiro: ");
    scanf("%d", &x);
    if (x > 0) {
        y = x % 3;
        printf("O resto de %d/3 eh: %d\n", x, y);

    }

    printf("Fim do programa\n");
    system("pause");
    return 0;

}

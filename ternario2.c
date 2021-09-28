#include<stdio.h>
#include<stdlib.h>
int main () {

    int x,y,z;
    printf("Digite x:");
    scanf("%d", &x);
    printf("Digite y:");
    scanf("%d", &y);

    z = (x > y) ? printf(" O numero maior eh o X. \n")
                : printf(" O numero maior eh o Y. \n");

    system("pause");
    return 0;

}

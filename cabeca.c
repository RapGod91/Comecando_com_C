#include <stdio.h>
#include<stdlib.h>
#include <time.h>
#include<conio.h>

int main(void) {
    char nome[61];
//só não entendi esse 61, são palavras, digitos
    printf(" Oi, digite seu nome: ");
    scanf("%s", nome);
    time_t mytime;
    mytime = time(NULL);
    struct tm tm = *localtime(&mytime);
    printf("\n");
    printf("Emef Profa Zilda Tome de Moraes\n");
    printf("Porto Feliz %d de Setembro de %d \n", tm.tm_mday, tm.tm_year + 1900);
    printf("Meu nome e %s. \n", nome);
    printf("Data de nascimento 25/10/2012\n");
    printf("Professora Vera\n");
    printf("Hoje e %d\n", tm.tm_wday);
    printf("\n");
    system("pause");
    return 0;
}

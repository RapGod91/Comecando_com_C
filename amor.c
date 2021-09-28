#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main () {

    char nome[61];
//só não entendi esse 61, são palavras, digitos
    printf(" Oi, digite seu nome: ");
    scanf("%s", nome);

    printf("O Raphael ama voce %s. \n", nome);

      getch();
  return 0;

}

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main () {

    char nome[61];
//s� n�o entendi esse 61, s�o palavras, digitos
    printf(" Oi, digite seu nome: ");
    scanf("%s", nome);

    printf("O Raphael ama voce %s. \n", nome);

      getch();
  return 0;

}

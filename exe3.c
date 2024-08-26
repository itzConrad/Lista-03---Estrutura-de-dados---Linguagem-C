/* Escreva  um  programa  que  contenha  duas  variáveis  inteiras.  Leia  essas  variáveis  do teclado. Em seguida, compare seus endereços e exiba o conteúdo do maior endereço*/

#include <stdio.h>
#include <windows.h>

int main(void){
    int numUm = 0;
    int numDois = 0;

    int *pNumUm = &numUm;
    int *pNumDois = &pNumDois;

    system("cls");
    printf("digite o valor do numero 1:\n");
    scanf("%d",&numUm);
    printf("digite o valor do numero 2:\n");
    scanf("%d",&numDois);

    if (*pNumUm > *pNumDois)
    {
        printf("Numero 1 > Numero 2\n");
        printf("endereco do numero 1: %x",&numUm);
    }else if (*pNumUm < *pNumDois)
    {
        printf("Numero 1 < Numero 2\n");
        printf("endereco do numero 2: %x",&numDois);
    }else{
        printf("Numero 1 = Numero 2");
    }
    
    return 0;
}
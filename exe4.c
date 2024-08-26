/* Escreva  um  programa  que  contenha  duas  variáveis  inteiras.  Leia  essas  variáveis  do teclado. Em seguida, compare seus endereços e exiba o conteúdo do maior endereço*/

#include <stdio.h>
#include <windows.h>

void soma(int *pNumUm, int *pNumDois);

int main(void){
    int numUm = 0;
    int numDois = 0;

    int *pNumUm = &numUm;
    int *pNumDois = &pNumDois;

    system("cls");
    printf("digite o valor do numero A:\n");
    scanf("%d",&numUm);
    printf("digite o valor do numero B:\n");
    scanf("%d",&numDois);
    soma(&numUm,&numDois);
    printf("valor de A somado com B: %d\n",numUm);
    printf("valor de B: %d",numDois);
    return 0;
}

void soma(int *pNumUm, int *pNumDois){
    *pNumUm = *pNumUm + *pNumDois;
}
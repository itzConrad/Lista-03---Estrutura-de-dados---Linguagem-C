/*Escreva um programa que declare um inteiro, um real e um char, e ponteiros para cada um  deles.Associe  as  variáveis  aos  ponteiros  (use  &).  Modifique  os  valores  de  cada variável   usando   os   ponteiros.   Imprima   os   valores   das   variáveis   antes   e   após   a modificação*/ */

#include <stdio.h>
#include <windows.h>

int main(void){
    int numUm = 23;
    float numDois = 0.515;
    char word = 'x';

    int *pNumUm = &numUm;
    float *pNumDois = &numDois;
    char *pWord = &word;

    system("cls");
    printf("Valores Originais:\n");
    printf("numUm: %d\nnumDois: %.3f\nletra: %c",numUm,numDois,word);

    *pNumUm = 24;
    *pNumDois = 3.244;
    *pWord = 'v';

    printf("\n\nValores Trocados:\n");
    printf("numUm: %d\nnumDois: %.3f\nletra: %c",numUm,numDois,word);

    return 0;
}
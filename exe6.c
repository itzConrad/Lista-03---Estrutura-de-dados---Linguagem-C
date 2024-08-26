/*Escreva  uma  função  que  dado  um  número  real  passado  como  parâmetro,  retorne  a parte  inteira  e  a  parte  fracionária  deste  número.  Escreva  um  programa  que  chama  esta função. Protótipo: void frac(float num, int* inteiro, float* frac)*/

#include <stdio.h>
#include <windows.h>

void fracionar(float num, int* parteInteira, float* partefrac);

int main() {
    float numero = 0.0;
    int inteiro;
    float frac;

    printf("Digite um numero com virgula (1.0):\n");
    scanf("%f",&numero);

    fracionar(numero, &inteiro, &frac);

    system("cls");
    printf("Numero dito: %.3f\n", numero);
    printf("Numero inteiro: %d\n", inteiro);
    printf("Sua parte fracionada: %.3f\n", frac);
    return 0;
}


void fracionar(float num, int* parteInteira, float* partefrac) {
    *parteInteira = (int)num;
    *partefrac = num - *parteInteira;
}
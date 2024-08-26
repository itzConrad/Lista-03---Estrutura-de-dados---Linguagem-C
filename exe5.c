/*Faça  uma  função  chamada  primo  que  recebe  como  parâmetro  um  inteiro  m  e  dois outros  inteiros  p1  e  p2  passados  por  referência.  A  função  deve  retornar  em  p1  o  maior número primo que é menor do que m e deve retornar em p2 o menor número primo que é maior do que m*/

#include <stdio.h>
#include <stdbool.h>

bool ehNumeroPrimo(int numero);
void encontrarPrimosProximos(int m, int *primoMenor, int *primoMaior);


int main() {
    int numero = 0;
    int primoMenorQueM, primoMaiorQueM;

    printf("Digite um numero:\n");
    scanf("%d",&numero);

    encontrarPrimosProximos(numero, &primoMenorQueM, &primoMaiorQueM);

    printf("Maior primo menor que %d: %d\n", numero, primoMenorQueM);
    printf("Menor primo maior que %d: %d\n", numero, primoMaiorQueM);

    return 0;
}


void encontrarPrimosProximos(int m, int *primoMenor, int *primoMaior) {
    int numeroPrimoMenor = m - 1;
    int numeroPrimoMaior = m + 1;

    while (numeroPrimoMenor > 1 && !ehNumeroPrimo(numeroPrimoMenor)) {
        numeroPrimoMenor--;
    }
    *primoMenor = (numeroPrimoMenor > 1) ? numeroPrimoMenor : -1;

    while (!ehNumeroPrimo(numeroPrimoMaior)) {
        numeroPrimoMaior++;
    }
    *primoMaior = numeroPrimoMaior;
}

bool ehNumeroPrimo(int numero) {
    if (numero <= 1) {
        return false;
    }
    for (int divisor = 2; divisor * divisor <= numero; divisor++) {
        if (numero % divisor == 0) {
            return false;
        }
    }
    return true;
}
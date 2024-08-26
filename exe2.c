/* Escreva  um  programa  que  contenha  duas  variáveis  inteiras.  Compare  o  endereço  de ambas e exiba o maior. */

#include <stdio.h>
#include <windows.h>

int main(void){
    int numUm = 100;
    int num2 = 90;

    int *pnumUm = &numUm;
    int *pNum2 = &pNum2;

    if (*pnumUm > *pNum2)
    {
        printf("Numero 1 > Numero 2");
    }else if (*pnumUm < *pNum2)
    {
        printf("Numero 1 < Numero 2");
    }else{
        printf("Numero 1 = Numero 2");
    }
    
    return 0;
}
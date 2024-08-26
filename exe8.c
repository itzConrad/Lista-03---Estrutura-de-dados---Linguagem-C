/*Desenvolva  um  programa  que  leia  a  quantidade  total  de  segundos  e  converta  para Horas,  Minutos  e  Segundos.  Imprima  o  resultado  da  conversão  no  formato  HH:MM:SS. Para isso, utilize a função com protótipo:void converteHora(int total segundos,int *hora, int *min, int *seg)*/

#include <stdio.h>

void converteHora(int total, int *h, int *m, int *s);

int main(){
    int total_seg;
    int horas, minutos, segundos;

    printf("Informe o total de segundos: ");
    scanf("%d", &total_seg);
    converteHora(total_seg, &horas, &minutos, &segundos);
    printf("Tempo: %02d:%02d:%02d\n", horas, minutos, segundos);
    return 0;
}

void converteHora(int total, int *h, int *m, int *s){
    *h = total / 3600;
    *m = (total % 3600) / 60;
    *s = total % 60;
}
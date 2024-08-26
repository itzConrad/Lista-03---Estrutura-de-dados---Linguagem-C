/* Implemente uma função que calcule a área da superfície e o volume de uma esfera de raio R. Essa função deve obedecer ao protótipo: void calc_esfera(float R, float *area, float *volume) A área da superfície e o volume são dados, respectivamente, por: A = 4 * pi * R2 V = 4/3 * pi * R3*/

#include <stdio.h>
#include <math.h> 

void calc_esfera(float r, float *a, float *v);

int main() {
    float raio = 5.0;
    float area, volume;

    calc_esfera(raio, &area, &volume);

    printf("Raio da esfera: %.2f\n", raio);
    printf("Area da superficie: %.2f\n", area);
    printf("Volume: %.2f\n", volume);

    return 0;
}

void calc_esfera(float r, float *a, float *v) {
    *a = 4 * M_PI * r * r;

    *v = (4.0/3.0) * M_PI * r * r * r;
}
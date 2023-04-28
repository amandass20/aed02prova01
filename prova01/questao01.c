#include <stdio.h>
#include <stdlib.h>
#include "questao01.h"

void entradaQ01(float *r){
    printf("Informe o tamanho do raio: ");
    scanf("%f", r);
}

void processamentoQ01(float *r, float *d, float *p, float *a, float *v){
    float pi = 3.14;

    *d = 2 * *r;
    *p = 2 * pi * *r;
    *a = pi * pow(*r, 2);
    *v = (4/3) * pi * pow(*r, 3);
}

void saidaQ01(float d, float p, float a, float v){
    printf("\nDiametro do circulo: %.2f", d);
    printf("\nPerimetro do circulo: %.2f", p);
    printf("\nArea do circulo: %.2f", a);
    printf("\nVolume do circulo caso fosse uma base para se criar uma esfera: %.2f\n", v);
}

void questao01(void){
    float raio, diametro, perimetro, area, volume;

    entradaQ01(&raio);
    processamentoQ01(&raio, &diametro, &perimetro, &area, &volume);
    saidaQ01(diametro, perimetro, area, volume);
}

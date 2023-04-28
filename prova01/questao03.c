#include <stdio.h>
#include <stdlib.h>
#include "questao03.h"

void entradaQ03(int*valorC, int*valorP){
    printf("Informe o valor da compra:");
    scanf("%d", valorC);
    printf("Informe o valor do pagamento:");
    scanf("%d", valorP);
}


void procesamentoQ03(int *valorC, int *valorP, float *nota100, float *nota10, float *nota1){
    float *troco = *valorP - *valorC;
    int resto;
    if (*troco < 0){
        printf("pagamento negado");
    } else {
        *nota100 = *troco / 100;
        resto = *troco % 100;
        *nota10 = resto / 10;
        resto = resto % 10;
        *nota1 = resto;
    }
}

void saidaQ03(float nota100, float nota10, float nota1){
    printf("Quantidades de notas de 100: %f", nota100);
    printf("Quantidades de notas de 10: %f", nota10);
    printf("Quantidades de notas de 1: %f", nota1);
}

void questao03(void){
    int vCompra, vPgt;
    float nota100, nota10, nota1;

    entradaQ03(&vCompra, &vPgt);
    processamentoQ03(&vCompra, &vPgt, &nota100, &nota10, &nota1);
    saidaQ03(nota100, nota10, nota1);
}

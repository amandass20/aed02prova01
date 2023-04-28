#include <stdio.h>
#include "questao02.h"

void entradaQ02(float *salB){
    printf("\nInforme seu salario bruto:");
    scanf("%f", salB);
}

void processamentoQ02(float *salB, float *salL){
    if (*salB < 2000){
        *salL = *salB - (*salB * 0.1);
    } else {
        *salL = *salB - (*salB * 0.2);
    }
}

void saidaQ02(float salL){
    printf("\nO salario liquido: %.2f", salL);
}

void questao02(void){
    float salarioBruto, salarioLiquido;

    entradaQ02(&salarioBruto);
    processamentoQ02(&salarioBruto, &salarioLiquido);
    saidaQ02(salarioLiquido);
}

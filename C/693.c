#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
    float pa, pb, pc, qa, qb, qc;
    scanf("%f%f%f%f%f%f", &pa, &pb, &pc, &qa, &qb, &qc);
    printf("Valor: R$%.2f", ((pa * qa) + (pb * qb) + (pc * qc)));
    return 0;
}
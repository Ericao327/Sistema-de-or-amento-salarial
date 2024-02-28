#include <stdio.h>

#define SALARIO 2000
#define CONTAS_PAGAR 500
#define ESTUDOS 500
#define LAZER 400

int main() {
    float fundo_emergencia;
    float saldo_disponivel;

    // Calculando o fundo de emerg�ncia
    fundo_emergencia = SALARIO - CONTAS_PAGAR - ESTUDOS - LAZER;

    // Calculando o saldo dispon�vel
    saldo_disponivel = SALARIO - CONTAS_PAGAR - ESTUDOS - LAZER - fundo_emergencia;

    // Exibindo os resultados
    printf("Saldo dispon�vel: R$%.2f\n", saldo_disponivel);
    printf("Fundo de emerg�ncia: R$%.2f\n", fundo_emergencia);

    return 0;
}

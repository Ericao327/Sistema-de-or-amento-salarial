#include <stdio.h>

#define SALARIO 2000
#define CONTAS_PAGAR 500
#define ESTUDOS 500
#define LAZER 400

int main() {
    float fundo_emergencia;
    float saldo_disponivel;

    // Calculando o fundo de emergência
    fundo_emergencia = SALARIO - CONTAS_PAGAR - ESTUDOS - LAZER;

    // Calculando o saldo disponível
    saldo_disponivel = SALARIO - CONTAS_PAGAR - ESTUDOS - LAZER - fundo_emergencia;

    // Exibindo os resultados
    printf("Saldo disponível: R$%.2f\n", saldo_disponivel);
    printf("Fundo de emergência: R$%.2f\n", fundo_emergencia);

    return 0;
}

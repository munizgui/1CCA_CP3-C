#include <stdio.h>

void exibirMenu();
void consultarSaldo(float saldo);
float realizarSaque(float saldo);
float realizarDeposito(float saldo);
void esperarUsuario();
void limparTela();

int main() {
    float saldo = 500.00;
    int opcao;

    do {
        limparTela();
        exibirMenu();
    }
}
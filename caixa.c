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
    
        if (scanf("%d", &opcao) != 1) {
            while (getchar() != '\n'); 
            opcao = -1;
        }
        while (getchar() != '\n');

        switch(opcao) {
            case 1:
                consultarSaldo(saldo);
                break;
            case 2:
                saldo = realizarSaque(saldo);
                break;
            case 3:
                saldo = realizarDeposito(saldo);
                break;
            case 0:
                printf("\nSaindo... Operacao encerrada.\n");
                break;
            default:
                printf("\nOpcao Invalida!\n");
                esperarUsuario();
        }

    } while(opcao != 0);

    return 0;
}
// criação das funções do menu

void limparTela() {
    for (int i = 0; i < 50; i++) {
        printf("\n");
    }
}

void esperarUsuario() {
    printf("\nPressione ENTER para continuar...");
    getchar(); 
}
// função de exibição menu

void exibirMenu() {
    printf("========================\n");
    printf("    ATM FIAP - 2026     \n");
    printf("========================\n");
    printf("1 - Consultar Saldo\n");
    printf("2 - Realizar Saque\n");
    printf("3 - Realizar Deposito\n");
    printf("0 - Sair\n");
    printf("========================\n");
    printf("Escolha uma opcao: ");
}
void consultarSaldo(float saldo) {
    printf("\n--- SALDO ATUAL ---\n");
    printf("R$ %.2f\n", saldo);
    printf("-------------------\n");
    esperarUsuario();
}
float realizarDeposito(float saldo) {
    float valor;
    printf("\nDigite o valor do deposito: R$ ");
    scanf("%f", &valor);
    while (getchar() != '\n'); 

    if (valor > 0) {
        saldo += valor;
        printf("Sucesso! Novo saldo: R$ %.2f\n", saldo);
    } else {
        printf("Valor invalido!\n");
    }
    esperarUsuario();
    return saldo;
}
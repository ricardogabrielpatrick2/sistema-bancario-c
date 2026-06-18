#include <stdio.h>
#include <string.h>

int main(){
    int opcao;
    float saldo = 1000;
    float valorDepositado;
    float valorSaque;
    char extrato[100][50];
    int totalOperacoes = 0;

    do{
        printf("==== BANCO ====\n");
        printf("\n");

        printf("1 - Ver saldo\n");
        printf("2 - Depositar\n");
        printf("3 - Sacar\n");
        printf("4 - Extrato\n");
        printf("0 - Sair\n");

        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

    if(opcao == 2){
        printf("Valor a depositar: ");
        scanf("%f", &valorDepositado);
    }

    if(opcao == 3){
        printf("Valor do saque: ");
        scanf("%f", &valorSaque);
    }
    
    switch (opcao){
    
    case 1: // Saldo

        printf("Seu saldo e de: R$ %.2f\n\n", saldo);
    break;
    
    case 2: // Depositar
     
    if(valorDepositado <= 0){
        printf("Valor invalido!!\n\n");
    }else{
        saldo = saldo + valorDepositado;

    sprintf(extrato[totalOperacoes],
        "[+] Deposito: R$ %.2f",
        valorDepositado);

        totalOperacoes++;

        printf("Seu Saldo e de: R$ %.2f\n\n", saldo);
    }
    break;

    case 3: // Sacar

    if(valorSaque <= 0){
        printf("Valor invalido!!\n\n");
    }
    else if(valorSaque > saldo){
        printf("Saldo insuficiente!\n\n");
    }
    else{
        saldo -= valorSaque;

    sprintf(extrato[totalOperacoes],
        "[-] Saque: R$ %.2f",
        valorSaque);
        
        totalOperacoes++;

        printf("Saque realizado!\n");
        printf("Seu saldo e de: R$ %.2f\n\n", saldo);
    }
    break;

    case 4:

        printf("\n=== EXTRATO ===\n");

    for(int i = 0; i < totalOperacoes; i++){
        printf("%s\n", extrato[i]);
    }

        printf("\n");

    break;

    default:
        break;
    }

    }while(opcao != 0);

    return 0;
}
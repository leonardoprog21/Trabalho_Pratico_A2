/*
 * Nome do programa : Arvore
 * 
 * Desenvolvedores
 * Nome: Matheus do carmo Santos RA: 106020 
 * Nome: Matheus Galvani de Camargo RA: 107285
 * Nome: RA:
 * Nome: RA:
 * Nome: RA:
 * 
 */

#include "func.c"


int main() {

    Arvore *tree; 

    iniciarArvore(&tree); // Gera um nó vazio

    // Printa o menu e utiliza o valor retornado para iniciar as operacoes
    switch (printarMenu()) { 
    case 1:
        printf("\nLiberando entrada de dados...\n"); // Se usuario escolheu digitar os dados
        break;
    case 2:
        printf("\nAbrindo arquivo...\n"); // Se usuario escolheu ler do arquivo
        break;
    case 3:
        printf("\nBye...\n"); // Se usuario escolheu encerrar
        exit(0);
        break;
    default:
        printf("\nOpcao nao identificada!\n"); // Se usuario digitou uma opcao invalida
        exit(0);
        break;
    }

    return 0;
    
} /*----- Fim do Codigo -----*/
#include <stdio.h>
#include "arvore.h"

#define true 1
#define false 0

void iniciarArvore(Arvore **tree) { // Inicializa a arvore com valor "vazio"
    *tree = NULL;
}

int printarMenu() {
    int valor;

    printf(
        "\n============== Menu =================\n"
        "1) Digitar as entradas\n"
        "2) Ler do arquivo\n"
        "3) Encerrar\n"
        "\n"
        "Digite a opcao desejada: "
        );
  
    scanf("%d", &valor); 

    return valor;

}

void inserirNo(Arvore **tree, int valor) {}

void lerArquivo(Arvore **tree) {}

void lerDoUsuario(Arvore **tree) {}

int estaVazia(Arvore *tree) {}

Arvore* buscar(Arvore *tree,int valor) {}

void printarNoRaiz(Arvore *tree) {}

void printarNosFolha(Arvore *tree) {}

void printarNosRamo(Arvore *tree) {}

int alturaDaArvore(Arvore *tree) {}

int profundidadeDaArvore(Arvore *tree) {}

int grauDoNo(Arvore *tree) {}

int alturaDoNo(Arvore *tree) {}

int profundidoDoNo(Arvore *tree) {}

void printarDescendentes(Arvore *tree) {}

void printarAncestrais(Arvore *tree) {}

void preOrdem(Arvore *tree) {} //Gui

void posOrdem(Arvore *tree) {} //Gui

void emOrdem(Arvore *tree) {} //Gui
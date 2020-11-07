#ifndef ARVORE_H
#define ARVORE_H


typedef struct _arvore {
    struct _arvore *pai;
    struct _arvore *esq;
    struct _arvore *dir;
    int dado;
} Arvore ;

void iniciarArvore(Arvore **);






#endif
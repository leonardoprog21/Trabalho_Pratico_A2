#ifndef ARVORE_H
#define ARVORE_H


typedef struct _arvore {
    struct _arvore *pai;
    struct _arvore *filho1;
    struct _arvore *filho2;
    int dado;
} Arvore ;








#endif
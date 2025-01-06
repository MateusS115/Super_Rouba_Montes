#include <stdio.h>
#include <stdlib.h>
#include "pilha_enc.h"

// Funcao que cria uma pilha
PilhaEnc* criaPilhaEnc() {
    PilhaEnc *pilha = (PilhaEnc*)malloc(sizeof(PilhaEnc));
    if (pilha != NULL) {
        pilha->topo = NULL;
    }
    return pilha;
}

// Funcao que destroi uma pilha
void destroiPilhaEnc(PilhaEnc *pilha) {
    while (!vaziaPilhaEnc(pilha)) {
        desempilhaPilhaEnc(pilha);
    }
    free(pilha);
}

// Funcao que insere um elemento na pilha
void empilhaPilhaEnc(PilhaEnc *pilha, Carta info) {
    NodoPEnc *novo = (NodoPEnc*)malloc(sizeof(NodoPEnc));
    if (novo != NULL) { // Idealmente, sempre checar!
        novo->info = info;
        novo->prox = pilha->topo;
        pilha->topo = novo;
    }
}

// Funcao que remove um elemento da pilha
Carta desempilhaPilhaEnc(PilhaEnc* pilha) {
    NodoPEnc *aux = pilha->topo; 
    /* Aqui assumimos que desempilha eh 
    chamada apenas se a pilha nao eh vazia */
    Carta info = aux->info;
    pilha->topo = aux->prox;
    free(aux);
    return info;
}

// Funcao que determina se uma pilha eh vazia
int vaziaPilhaEnc(PilhaEnc *pilha) {
    return (pilha->topo == NULL);
}
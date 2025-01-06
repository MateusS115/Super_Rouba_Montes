#ifndef _PILHA_ENC_H_
#define _PILHA_ENC_H_

#include "cartas.h"

typedef struct nodoPEnc{
   Carta info;
   struct nodoPEnc *prox;
} NodoPEnc;

typedef struct pilhaEnc{
   NodoPEnc *topo;
} PilhaEnc;

// Funcao que cria uma pilha
PilhaEnc* criaPilhaEnc();

// Funcao que destroi uma pilha
void destroiPilhaEnc(PilhaEnc *pilha);

// Funcao que insere um elemento na pilha
void empilhaPilhaEnc(PilhaEnc *pilha, Carta info);

// Funcao que remove um elemento da pilha
Carta desempilhaPilhaEnc(PilhaEnc *pilha);

// Funcao que determina se uma pilha eh vazia
int vaziaPilhaEnc(PilhaEnc* pilha);

#endif

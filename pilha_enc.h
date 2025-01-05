#ifndef _PILHA_ENC_H_
#define _PILHA_ENC_H_

#define TAM_MAX_NOME 40
#define TAM_MAX_EMAIL 25

typedef enum{
   copas = 0,
   espadas = 1,
   paus = 2,
   ouros = 3
} Naipe;

typedef struct{
   int valor;
   Naipe naipe;
} Carta;

typedef Carta Info;

typedef struct nodoPEnc{
   Info info;
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
void empilhaPilhaEnc(PilhaEnc *pilha, Info info);

// Funcao que remove um elemento da pilha
Info desempilhaPilhaEnc(PilhaEnc *pilha);

// Funcao que determina se uma pilha eh vazia
int vaziaPilhaEnc(PilhaEnc* pilha);

#endif

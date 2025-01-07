#ifndef _LISTA_CIRC_H_
#define _LISTA_CIRC_H_

#include "cartas.h"
#include "lista_enc.h"

typedef struct {
    int chave;
    ListaEnc *mao;
} Jogador;

typedef struct nodoCEnc {
    Jogador info;
    struct nodoCEnc *prox;
} NodoCEnc;

typedef struct {
    struct nodoCEnc *prim;
} ListaCircEnc;

// Funcao que cria uma lista
ListaCircEnc* criaListaCircEnc();

// Funcao que destroi uma lista
void destroiListaCircEnc(ListaCircEnc *lista);

// Funcao que imprime todos os nodos de uma lista
//void imprimeListaCircEnc(ListaCircEnc *lista);

// Funcao que insere um nodo no inicio de uma lista
int insereInicioListaCircEnc(ListaCircEnc *lista, Jogador info);

// Funcao que resgata um nodo com uma informacao de uma lista
//NodoCEnc* buscaInfoListaCircEnc(ListaCircEnc* lista, int chave);

// Funcao que remove um nodo com uma informacao de uma lista
//int removeInfoListaCircEnc(ListaCircEnc* lista, int chave);


#endif

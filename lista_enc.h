#ifndef _LISTA_ENC_H_
#define _LISTA_ENC_H_

#define TAM_MAX_NOME 40
#define TAM_MAX_EMAIL 25

typedef struct{
   int chave;
   char nome[TAM_MAX_NOME];
   char email[TAM_MAX_EMAIL];
} Aluno;

typedef Aluno Info2;

typedef struct nodoLEnc{
   Info2 info;
   struct nodoLEnc *prox;
} NodoLEnc;

typedef struct{
   struct nodoLEnc *prim;
} ListaEnc;

// Funcao que cria uma lista
ListaEnc* criaListaEnc();

// Funcao que destroi uma lista
void destroiListaEnc(ListaEnc *lista);

// Funcao que imprime todos os nodos de uma lista
void imprimeListaEnc(ListaEnc *lista);

// Funcao que insere um nodo no inicio de uma lista
int insereInicioListaEnc(ListaEnc *lista, Info info);

// Funcao que resgata um nodo com uma informacao de uma lista
NodoLEnc* buscaInfoListaEnc(ListaEnc* lista, int chave);

// Funcao que remove um nodo com uma informacao de uma lista
int removeInfoListaEnc(ListaEnc* lista, int chave);

#endif

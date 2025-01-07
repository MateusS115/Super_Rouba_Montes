#include "lista_circ.h"
#include <stdio.h>
#include <stdlib.h>

// Funcao que cria uma lista
ListaCircEnc* criaListaCircEnc(){
   ListaCircEnc *lista = (ListaCircEnc*)malloc(sizeof(ListaCircEnc));
   if (lista != NULL) // Idealmente, sempre checar!
      lista->prim = NULL; // Representacao de lista vazia
   return lista;
}

int insereInicioListaCircEnc(ListaCircEnc *lista, Jogador info){
 NodoCEnc *aux;
 NodoCEnc *novo = (NodoCEnc*)malloc(sizeof(NodoCEnc));
 if (novo == NULL) // Idealmente, sempre checar!
 return 0;
 novo->info = info;
 if (lista->prim == NULL){
 lista->prim = novo;
 novo->prox = lista->prim;
 }else{
 aux = lista->prim;
 while(aux->prox != lista->prim)
 aux = aux->prox;
 aux->prox = novo;
 novo->prox = lista->prim;
 lista->prim = novo;
 }
 return 1;
}


// Funcao que destroi uma lista
void destroiListaCircEnc(ListaCircEnc *lista){
   NodoCEnc *aux = lista->prim;
   while(aux != NULL){
       NodoCEnc *tmp = aux->prox;
       free(aux); // Cuidar ordem do free
       aux = tmp;
   }
   free(lista);
}


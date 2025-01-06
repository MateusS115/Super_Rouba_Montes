#ifndef _CARTAS_H_
#define _CARTAS_H_

typedef enum{
   copas = 0,
   espadas = 1,
   paus = 2,
   ouros = 3
} Naipe;

typedef struct{
   int chave;
   int valor;
   Naipe naipe;
} Carta;

#endif
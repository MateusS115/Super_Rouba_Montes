#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilha_enc.h"
#include "rouba_montes.h"


int main()
{
    PilhaEnc *baralho = criaBaralho();
    Carta carta = desempilhaPilhaEnc(baralho);
    printf("%d %d\n", carta.valor, carta.naipe);
    for(int i = 1; i<= 51; i++){
        carta = desempilhaPilhaEnc(baralho);
        printf("%d %d %d\n", carta.chave, carta.valor, carta.naipe); 
    }
    return 0;

    
}
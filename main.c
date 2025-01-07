#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilha_enc.h"
#include "rouba_montes.h"
#include "lista_enc.h"
#include "lista_circ.h"

int main()
{
    PilhaEnc *baralho = criaBaralho();
    /*
    Carta carta = desempilhaPilhaEnc(baralho);
    printf("%d %d %d\n", carta.chave, carta.valor, carta.naipe);
    for(int i = 1; i<= 51; i++){
        carta = desempilhaPilhaEnc(baralho);
        printf("%d %d %d\n", carta.chave, carta.valor, carta.naipe); 
    }
    */
    ListaEnc *cartasNaMesa = criaListaEnc();

    insereInicioListaEnc(cartasNaMesa, desempilhaPilhaEnc(baralho));

    ListaEnc *mao_1 = criaListaEnc();

    insereInicioListaEnc(mao_1, desempilhaPilhaEnc(baralho));

    Jogador jogador_1 = {1, mao_1};

    ListaCircEnc *jogadores = criaListaCircEnc();

    insereInicioListaCircEnc(jogadores, jogador_1);

    
    destroiPilhaEnc(baralho);
    destroiListaEnc(cartasNaMesa);
    destroiListaCircEnc(jogadores);
    destroiListaEnc(mao_1);

    

    return 0;

    
}
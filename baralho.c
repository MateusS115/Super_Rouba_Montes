#include <stdio.h>
#include "pilha_enc.h"
#include "baralho.h"

//Funcao que cria um baralho de 52 cartas, 4 naipes.
PilhaEnc* criaBaralho(){
    PilhaEnc *baralho = criaPilhaEnc();
    for(int i = 1; i <= 52; i++){
        Info info = {i%13, i/13};
        empilhaPilhaEnc(baralho, info);
    }
    return NULL;
}

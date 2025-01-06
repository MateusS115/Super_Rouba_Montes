#include <stdio.h>
#include "pilha_enc.h"
#include "rouba_montes.h"

//Funcao que cria um baralho de 52 cartas, 4 naipes.
//FALTA TORNAR ISSO EMBARALHADO
PilhaEnc* criaBaralho(){
    PilhaEnc *baralho = criaPilhaEnc();
    for(int i = 0; i <= 51; i++){
        Carta info = {(i), (i%13 + 1), (i/13)};
        empilhaPilhaEnc(baralho, info);
    }
    return baralho;
}

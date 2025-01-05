#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lista_enc.h"
#include "pilha_enc.h"
#include "baralho.h"


int main()
{
    PilhaEnc *baralho = criaBaralho();
    printf("%d", desempilhaPilhaEnc(baralho).valor);
    return 0;
}
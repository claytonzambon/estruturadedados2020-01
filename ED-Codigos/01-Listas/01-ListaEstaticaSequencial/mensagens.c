//Arquivo mensagens.c
#include <stdio.h>
#include <stdlib.h>
#include "ListaSequencial.h"

void msg_digite_matricula(){
    printf("Digite a Matricula: ");
}

void msg_digite_nome(){
    printf("Digite o nome: ");
}

void msg_digite_nota(int nota){
    printf("Digite a Nota %d: ", nota);
}

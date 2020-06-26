//main.c : Programa Principal
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ListaSequencial.h"

int main(){
    Lista* li = cria_lista();
    //Declaração de uma Struct para armazenar e inserir os elementos
    struct aluno dados_aluno;
    int matricula_aluno, posicao;
    int opcao;
	int i = 1;
	while (i == 1) {
	    system("cls");  //limpando a tela
	    // Desenhando o Menu
        //menu();
        printf("ACADEMICO: CLAYTON ZAMBON\n\n");
        printf("\n################################################");
        printf("\n#       MENU - Lista Estatica Sequencial       #");
        printf("\n#                                              #");
        printf("\n#	Digite a opcao desejada                #");
        printf("\n#                                              #");
        printf("\n#	 1 = Inserir elemento no Final         #");
        printf("\n#	 2 = Inserir elemento no Inicio        #");
        printf("\n#	 3 = Inserir elemento Ordenado         #");
        printf("\n#	 4 = Remover elemento do Final         #");
        printf("\n#	 5 = Remover elemento do Inicio        #");
        printf("\n#	 6 = Remover elemento                  #");
        printf("\n#	 7 = Consultar elemento pela posicao   #");
        printf("\n#	 8 = Consultar elemento pela Matricula #");
        printf("\n#	 9 = Exibir lista                      #");
        printf("\n#	 10 = Exibir Tamanho da Lista          #");
        printf("\n#	 11 = Sair                             #");
        printf("\n#                                              #");
        printf("\n################################################");
        printf("\n\n");
        printf("\nEscolha uma opcao para continuar >>: ");
        scanf("%d", &opcao); //Lendo a opção digitada pelo usuário
		switch(opcao) {
			case 1:
				if(lista_cheia(li))
                {
                    break;
                } else {
                    printf("Digite a Matricula: ");
                    scanf("%d", &dados_aluno.matricula);
                    printf("Digite o nome: ");
                    scanf("%s", dados_aluno.nome);
                    printf("Digite a Nota 01: ");
                    scanf("%f", &dados_aluno.n1);
                    printf("Digite a Nota 02: ");
                    scanf("%f", &dados_aluno.n2);
                    printf("Digite a Nota 03: ");
                    scanf("%f", &dados_aluno.n3);
                    insere_lista_final(li, dados_aluno);
                    break;
                }
            case 2:
				if(lista_cheia(li))
                {
                    break;
                } else {
                    printf("Digite a Matricula: ");
                    scanf("%d", &dados_aluno.matricula);
                    printf("Digite o nome: ");
                    scanf("%s", dados_aluno.nome);
                    printf("Digite a Nota 01: ");
                    scanf("%f", &dados_aluno.n1);
                    printf("Digite a Nota 02: ");
                    scanf("%f", &dados_aluno.n2);
                    printf("Digite a Nota 03: ");
                    scanf("%f", &dados_aluno.n3);
                    insere_lista_inicio(li, dados_aluno);
                    break;
                }
            case 3:
				if(lista_cheia(li))
                {
                    break;
                } else {
                    printf("Digite a Matricula: ");
                    scanf("%d", &dados_aluno.matricula);
                    printf("Digite o nome: ");
                    scanf("%s", dados_aluno.nome);
                    printf("Digite a Nota 01: ");
                    scanf("%f", &dados_aluno.n1);
                    printf("Digite a Nota 02: ");
                    scanf("%f", &dados_aluno.n2);
                    printf("Digite a Nota 03: ");
                    scanf("%f", &dados_aluno.n3);
                    insere_lista_ordenada(li, dados_aluno);
                    break;
                }
			case 4:
				if(lista_vazia(li))
                {
                    break;
                } else {
                    remove_lista_final(li);
                    break;
                }
            case 5:
				if(lista_vazia(li))
                {
                    break;
                } else {
                    remove_lista_inicio(li);
                    system("pause");
                    break;
                }
			case 6:
				if(lista_vazia(li))
                {
                    break;
                } else {
                    printf("\nDigite a matricula a ser removida: ");
                    scanf("%d", &matricula_aluno);
                    remove_lista(li, matricula_aluno);
                    system("pause");
                    break;
                }
			case 7:
				if(lista_vazia(li))
                {
                    break;
                } else {
                    printf("\nDigite a posicao a ser buscada: ");
                    scanf("%d", &posicao);
                    consulta_lista_pos(li, posicao, &dados_aluno);
                    system("pause");
                    break;
                }
            case 8:
				if(lista_vazia(li))
                {
                    break;
                } else {
                    printf("\nDigite a matricula a ser buscada: ");
                    scanf("%d", &matricula_aluno);
                    consulta_lista_mat(li, matricula_aluno, &dados_aluno);
                    system("pause");
                    break;
                }
			case 9:
				if(lista_vazia(li))
                {
                    break;
                } else {
                    imprime_lista(li);
                    system("pause");
                    break;
                }
            case 10:
				if(lista_vazia(li))
                {
                    break;
                } else {
                    printf("O tamanho da Lista eh: %d\n", tamanho_lista(li));
                    system("pause");
                    break;
                }
			case 11:
				printf("\n\n\t\tAte logo !!\n\n");
				i=0;
				break;
            default:
                printf("\n\nOpcao invalida\n\n");
                system ("pause");
                break;
		}
		printf("\n\n");
	}
	libera_lista(li);
	system ("pause");
    printf("\n\n");
    return 0;
}

//Arquivo ListaSequencial.h
//Tamanho que será nosso vetor
#define MAX 6

/*Definindo um Tipo Aluno
Elementos da Lista: desta forma será possível guardar
vários tipos de dados*/
struct aluno{
    int matricula;
    char nome[30];
    float n1,n2,n3;
};
//Definindo uma struct Lista
typedef struct lista Lista;

Lista* cria_lista();
void libera_lista(Lista* li);
//informacoes da Lista
int tamanho_lista(Lista* li);
int lista_cheia(Lista* li);
int lista_vazia(Lista* li);
//Insercoes na Lista
int insere_lista_final(Lista* li, struct aluno al);
int insere_lista_inicio(Lista* li, struct aluno al);
int insere_lista_ordenada(Lista* li, struct aluno al);
//Remocoes da Lista
int remove_lista_final(Lista* li);
int remove_lista_inicio(Lista* li);
int remove_lista(Lista* li, int mat);
//Consultas na Lista
int consulta_lista_pos(Lista* li, int pos, struct aluno *al);
int consulta_lista_mat(Lista* li, int mat, struct aluno *al);
//Exibir a Lista
void imprime_lista(Lista* li);

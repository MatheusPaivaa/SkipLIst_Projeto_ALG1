#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/* Cria a struct que contêm a palavra e sua definição */
typedef struct {
    char nome[50];
    char definicao[140];
} Verbete;

/* Struct para o nó de cada verbete com seu ponteiro para o próximo */
typedef struct node {
    Verbete *verbete;
    struct node **prox; // Ponteiro para o ponteiro do próximo elemento
    int chave; 
    float p; // Probabilidade de obter "Cara" (subir para o próximo nível)
} *node;

/* Struct para a skip list */
typedef struct skip_list{
    node head;
    int level;
    int level_max;
} *skip_list;

void inicia_skiplist(skip_list skip_list){

    /* Inicia a skip_list no nível 1 */
    skip_list->level = 1;
    skip_list->level_max = skip_list->level;

    /* Usa o nó head tanto como cabeça, quanto como cauda.
    Ou seja, vai apontar para o primeiro e último elemento ao mesmo tempo 
    em cada nível */
    for (int i = 1; i < skip_list->level_max; i++){
        (skip_list->head)->prox[i] = skip_list->head;
    }
}

void buscar(skip_list lista){



}

void inserir(){


}

void alterar(){


}


void remover(){

}

void imprimir(){

}


int main (){

    Verbete *verbete;
    char comando[12];

    verbete = malloc(sizeof(Verbete));

    scanf("%s", comando);

    if (strcmp(comando, "insercao") == 0){
        scanf("%s", verbete->nome);
        scanf("%s", verbete->definicao);
        inserir();

    } else if (strcmp(comando, "alteracao") == 0) {
        scanf("%s", verbete->nome);
        scanf("%s", verbete->definicao);
        alterar();

    } else if (strcmp(comando, "remocao") == 0) {
        scanf("%s", verbete->nome);
        remover();

    } else if (strcmp(comando, "busca") == 0){
        scanf("%s", verbete->nome);
        //buscar();

    } else if (strcmp(comando, "impressao") == 0){
        scanf("%c", &verbete->nome[0]);
        imprimir();

    } else {
        printf("OPERACAO INVALIDA");
    }

}
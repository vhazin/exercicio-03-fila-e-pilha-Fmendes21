#include <stdio.h>
#include <stdlib.h>

struct elemento{
	struct elemento *proximo;
	int info;
};

struct fila{
	struct elemento *inicio;
	struct elemento *fim;
	int tamanho;
};

int main(){
	int inserir(struct fila *aFila, int x);

	struct elemento *ptrElem;
	struct fila *ptrFila;
	ptrFila = malloc(sizeof(struct fila));

	ptrFila->inicio = NULL;
	ptrFila->fim = NULL;
	ptrFila->tamanho = 0;

	int n, i, id;
	scanf("%d", &n);
	n = n;

	for(i = 0; i < n; i++){
		scanf("%d", &id);
		inserir(ptrFila, id);
	}


}

int inserir(struct fila *aFila, int x){

	struct elemento *novo;
	novo = malloc(sizeof(struct elemento));

	if(novo == NULL){return 0;}
	else{
		novo->proximo = NULL; //ULTIMO ELEMENTO APONTA P/ NULL
		novo->info = x; //INSERE O PRIMEIRO ID
		aFila->fim->proximo = novo; //PROXIMO APONTA PARA novo
		aFila->fim = novo; //FIM TBM APONTA P/ novo, POIS novo AGR É O ÚLTIMO ELEMENTO 
		aFila->tamanho = aFila->tamanho + 1; //INCREMENTA O TAMANHO DA FILA
    return(1);
	}
}

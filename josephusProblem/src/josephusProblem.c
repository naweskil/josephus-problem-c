/*
 ============================================================================
 Name        : josephusProblem.c
 Author      : Natasha Kaweski e Vin�cius Ferreira
 Version     :
 Copyright   : Your copyright notice
 Description : O Problema de Josephus (Tenenbaum, 1989)
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef struct soldado SLista;
struct soldado {
	char nome[10];
	int num;
	SLista* prox;
};

SLista* inicializando();

int main(void) {

	/*
	 * Incializa-se a lista.
	 */
	SLista* circuloSoldados;
	circuloSoldados = inicializando();

	/*
	 * Cria uma matriz com o n�mero de soldados a serem inseridos na lista
	 */
	char soldados[5][10]  = { "Jo�o", "Arthur", "Davi", "Joaquim", "Eduardo" };

	int i;
	for ( i = 0; i < 5; i++ ) {
		printf("Lista Inicial de Soldados:\n%s, ", soldados[i]);
	}

	// Insere esses soldados no c�rculo
	for ( i = 0; i < 5; i++ ) {
		circuloSoldados = insereSoldadoNoCirc(soldados[i], circuloSoldados, i);
	}



	return EXIT_SUCCESS;
}

/*
 * Fun��o: Inicializa a lista circular.
 */
SLista* inicializando() {
	return NULL;
}

/*
 * Verifica se a lista est� vazia
 */
SLista* vazia(SLista* lista) {
	return !lista;
}

/*
 * Fun��o: Insere soldados na lista
 * Parametros: array com o nomes dos soldados, a lista a ser inserido os nomes
 */

insereSoldadoNoCirc(char nome, SLista* lista, int num) {
	SLista* aux;
	aux = (SLista*) malloc(sizeof(SLista));
	aux->nome = nome;

	if ( vazia(lista) ) {
		aux->prox = aux;
	} else {
		aux->prox = lista;
		SLista* aux2 = lista; // Find the last register

		// Make the list circular.
		do {
			aux2 = aux2->next;
		} while ( aux2->next != list );

		/* Return to the last register
		 * at the top of the list. */
		aux2->next = aux;
	}
	return aux; // Top of the list
}

/*
 * Return
 * Param
 */
//verificaCircVazio();

/*
 * Return
 * Param
 */
//imprimeSoldadosCirc();

/*
 * Return
 * Param
 */
//verificaQteSoldados();

/*
 * Return:
 * Param
 */
//executaJosephus();
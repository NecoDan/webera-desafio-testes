/*
 * GeraMatrizTransposta.cpp
 *
 *  Created on: 28 de out de 2019
 *       Author: Daniel Santos
 *    Copyright: Daniel Santos - Desafio Testes Webera
 */

#include "GeraMatrizTransposta.h"
#include <stdio.h>
#include "stdlib.h"

GeraMatrizTransposta::GeraMatrizTransposta() {

}

GeraMatrizTransposta::~GeraMatrizTransposta() {
}

void GeraMatrizTransposta::transportarMatriz(int linha, int coluna) {
	int i, j, aux = 0;
	int A[linha][coluna];

	for (i = 0; i < linha; i++) {
		for (j = 0; j < coluna; j++) {
			printf("Digite o valor do elemento [%d,%d] = ", i + 1, j + 1);
			scanf("%d", &A[i][j]);
		}
	}
	printf("\n");

	int T[linha][coluna];
	printf("Matriz original A: \n");
	for (i = 0; i < linha; i++) {
		for (j = 0; j < coluna; j++) {
			T[i][j] = A[i][j];
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}

	printf("\n");
	printf("Matriz transposta T: \n");
	for (i = 0; i < linha; i++) {
		for (j = i + 1; j < coluna; j++) {
			if (j != i) {
				aux = T[i][j];
				T[i][j] = T[j][i];
				T[j][i] = aux;
			}
		}
	}

	for (i = 0; i < linha; i++) {
		for (j = 0; j < coluna; j++)
			printf("%d ", T[i][j]);

		printf("\n");
	}

	printf("\n");
}

void GeraMatrizTransposta::transportarMatrizNovo(int linha, int coluna) {
	int aux;
	int indice = 1;
	int tamanho;

	if (linha > coluna) {
		tamanho = linha;
	} else {
		tamanho = coluna;
	}

	int A[tamanho][tamanho];

	for (linha = 0; linha < tamanho; linha++) {
		for (coluna = 0; coluna < tamanho; coluna++)
			A[linha][coluna] = 0;
	}

	int T[linha][coluna];
}


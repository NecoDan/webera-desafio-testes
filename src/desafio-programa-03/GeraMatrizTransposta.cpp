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

void GeraMatrizTransposta::transportarMatrizNovo(int qtdeLinhas,
		int qtdeColunas) {
	int linha = 0;
	int coluna = 0;
	int aux = 0;
	int tamanho = 0;

	if (qtdeLinhas == qtdeColunas) {
		transportarMatrizIguais(qtdeLinhas, qtdeColunas);
		return;
	}

	(qtdeLinhas > qtdeColunas) ? tamanho = qtdeLinhas : tamanho = qtdeColunas;

	int T[qtdeColunas][qtdeLinhas];
	int A[tamanho][tamanho];

	for (linha = 0; linha < tamanho; linha++) {
		for (coluna = 0; coluna < tamanho; coluna++)
			A[linha][coluna] = 0;
	}

	for (linha = 0; linha < qtdeLinhas; linha++) {
		for (coluna = 0; coluna < qtdeColunas; coluna++) {
			printf("Digite o valor do elemento [%d,%d] = ", linha + 1,
					coluna + 1);
			scanf("%d", &A[linha][coluna]);
		}
	}

	printf("\n\n\n Matriz inicial A:\n\n");
	for (linha = 0; linha < tamanho; linha++) {
		for (coluna = 0; coluna < tamanho; coluna++)
			printf("%d\t", A[linha][coluna]);
		printf("\n\n");
	}

	for (linha = 0; linha < tamanho; linha++) {
		for (coluna = 0; coluna < tamanho; coluna++) {
			if (linha > coluna) {
				aux = A[linha][coluna];
				A[linha][coluna] = A[coluna][linha];
				A[coluna][linha] = aux;
			}
		}
	}

	for (linha = 0; linha < qtdeColunas; linha++) {
		for (coluna = 0; coluna < qtdeLinhas; coluna++) {
			T[linha][coluna] = A[linha][coluna];
		}
	}

	printf("\nMatriz Transposta T\n\n");
	for (linha = 0; linha < qtdeColunas; linha++) {
		for (coluna = 0; coluna < qtdeLinhas; coluna++)
			printf("%d\t", T[linha][coluna]);

		printf("\n\n");
	}
}

void GeraMatrizTransposta::transportarMatrizIguais(int qtdeLinhas,
		int qtdeColunas) {
	int i, j, aux = 0;
	int A[qtdeLinhas][qtdeColunas];

	for (i = 0; i < qtdeLinhas; i++) {
		for (j = 0; j < qtdeColunas; j++) {
			printf("Digite o valor do elemento [%d,%d] = ", i + 1, j + 1);
			scanf("%d", &A[i][j]);
		}
	}
	printf("\n");

	int T[qtdeLinhas][qtdeColunas];
	printf("Matriz original A: \n");
	for (i = 0; i < qtdeLinhas; i++) {
		for (j = 0; j < qtdeColunas; j++) {
			T[i][j] = A[i][j];
			printf("%d\t", A[i][j]);
		}
		printf("\n\n");
	}

	printf("\n");
	printf("Matriz transposta T: \n");
	for (i = 0; i < qtdeLinhas; i++) {
		for (j = i + 1; j < qtdeColunas; j++) {
			if (j != i) {
				aux = T[i][j];
				T[i][j] = T[j][i];
				T[j][i] = aux;
			}
		}
	}

	for (i = 0; i < qtdeLinhas; i++) {
		for (j = 0; j < qtdeColunas; j++)
			printf("%d\t", T[i][j]);

		printf("\n\n");
	}

	printf("\n");
}

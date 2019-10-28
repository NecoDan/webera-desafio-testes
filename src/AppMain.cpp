//============================================================================
// Name        : webera-desafio-testes.cpp
// Author      : Daniel Santos
// Version     :
// Copyright   : Daniel Santos - Desafio Testes Webera
//============================================================================

#include <iostream>
#include <stdint.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <vector>

// Demais
#include "desafio-programa-01/ConversorMilhaEmKm.h"
#include "desafio-programa-02/DefineAnoBissexto.h"
#include "desafio-programa-03/GeraMatrizTransposta.h"
#include "desafio-programa-04/SomaPrimeiroNumsInteiros.h"

// Infraestrutura
#include "infra/Util.h"

using namespace std;

void executaTeste() {

}

void executaProgramaUm() {
	double valorKm = 0.0;
	cout << "Digite o valor em KM para converter em MILHAS: " << endl;
	cin >> valorKm;

	valorKm = Util::validaEntradaDados(valorKm,
			"Insira um valor MAIOR que zero para continuar a conversão: ");

	ConversorMilhaEmKm conversorMilhaEmKm;
	cout << "\n\n RESULT: \n KM =  " << valorKm << " KM." << endl;
	cout << " MILHAS =  " << conversorMilhaEmKm.converterMilhasEmKm(valorKm)
			<< " mi." << endl;
}

void executaProgramaDois() {
	int ano = 0;

	cout << "Digite o ANO a ser verificado com BISSEXTO: " << endl;
	cin >> ano;

	ano =
			Util::validaEntradaDados(ano,
					"Insira um valor MAIOR que zero para verificar se o ano eh BISSEXTO: ");

	DefineAnoBissexto defineAnoBissexto;
	bool ehAnoBissexto = defineAnoBissexto.isAnoBissexto(ano);

	(ehAnoBissexto) ?
			cout << "O ANO de " << ano << " eh BISSEXTO:" << endl :
			cout << "O ANO de " << ano << " NÃO eh BISSEXTO:" << endl;
}

void executaProgramaTres() {
	int qtdeLinhas = 0;
	cout << "Digite a qtde LINHAS: " << endl;
	cin >> qtdeLinhas;

	qtdeLinhas =
			Util::validaEntradaDados(qtdeLinhas,
					"Insira um valor MAIOR que zero para definir a qtde de LINHAS da MATRIZ: ");

	int qtdeColunas = 0;
	cout << "Digite a qtde COLUNAS: " << endl;
	cin >> qtdeColunas;

	qtdeColunas =
			Util::validaEntradaDados(qtdeColunas,
					"Insira um valor MAIOR que zero para definir a qtde de COLUNAS da MATRIZ: ");

//	GeraMatrizTransposta::transportarMatriz(qtdeLinhas, qtdeColunas);
	GeraMatrizTransposta::transportarMatrizNovo(qtdeLinhas, qtdeColunas);
}

void executaProgramaQuatro() {
	int valorN = 0;

	cout << "Digite o valor n a ser SOMADO:" << endl;
	cin >> valorN;

	valorN =
			Util::validaEntradaDados(valorN,
					"Insira um valor MAIOR que zero para verificar se o ano eh BISSEXTO: ");

	SomaPrimeiroNumsInteiros somaPrimeiroNumsInteiros;
	int valorSoma = somaPrimeiroNumsInteiros.somarNumerosInteiros(valorN);

	cout << " Valor N a ser SOMADO =  " << valorN << "." << endl;
	cout << " SOMA DOS VALORES = " << valorSoma << endl;
}

int main() {
	cout << "Executando Programas Desafios Webera" << endl;

//	executaTeste();

//	executaProgramaUm();

//	executaProgramaDois();

	executaProgramaTres();

//	executaProgramaQuatro();

	getchar();
	return 0;
}


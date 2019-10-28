/*
 * ConversorMilhaEmKm.cpp
 *
 *  Created on: 27 de out de 2019
 *      Author: danielsantos
 */

#include "ConversorMilhaEmKm.h"
#include <cmath>

const double VALOR_DEFAULT_MILHA = 1.61;

ConversorMilhaEmKm::ConversorMilhaEmKm() {
}

ConversorMilhaEmKm::~ConversorMilhaEmKm() {
}

bool ConversorMilhaEmKm::iguaA(double primeiroValor, double segundoValor) {
	round(primeiroValor);
	round(segundoValor);

	return (primeiroValor == segundoValor);
}

bool ConversorMilhaEmKm::igualAZero(double valor) {
	return iguaA(valor, 0.000);
}

double ConversorMilhaEmKm::converterMilhasEmKm(double valor) {
	double valorMilhas = 0.0;

	if (igualAZero(valor))
		return valorMilhas;

	valorMilhas = (valor / VALOR_DEFAULT_MILHA);
	return valorMilhas;
}

double ConversorMilhaEmKm::converterKmEmMilhas(double valor) {
	double valorKm = 0.0;

	if (igualAZero(valor))
		return valorKm;

	valorKm = (VALOR_DEFAULT_MILHA * valor);
	return valorKm;
}


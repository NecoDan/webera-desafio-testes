/*
 * Util.cpp
 *
 *  Created on: 28 de out de 2019
 *      Author: Daniel Santos
 */

#include "Util.h"

using namespace std;

Util::Util() {
}

Util::~Util() {
}

bool Util::igualAZero(double valor) {
	round(valor);
	return (valor == 0.000);
}

int Util::validaEntradaDados(int valor, string mensagem) {
	if (igualAZero(valor)) {
		cout << mensagem << endl;
		cin >> valor;

		while (igualAZero(valor)) {
			cout << mensagem << endl;
			cin >> valor;
		}
	}

	return valor;
}

double Util::validaEntradaDados(double valor, string mensagem) {
	if (igualAZero(valor)) {
		cout << mensagem << endl;
		cin >> valor;

		while (igualAZero(valor)) {
			cout << mensagem << endl;
			cin >> valor;
		}
	}

	return valor;
}


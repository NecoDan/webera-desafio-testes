/*
 * DefineAnoBissexto.cpp
 *
 *  Created on: 28 de out de 2019
 *      Author: danielsantos
 */

#include "DefineAnoBissexto.h"

DefineAnoBissexto::DefineAnoBissexto() {

}

DefineAnoBissexto::~DefineAnoBissexto() {

}

bool DefineAnoBissexto::isAnoBissexto(int ano) {
	if (ano <= 0)
		return false;

	return (isMultiploQuatrocentos(ano)
			|| (isMultiploQuatro(ano) && !isMultiploCem(ano)));
}

bool DefineAnoBissexto::isMultiploQuatrocentos(int ano) {
	if (ano % 400 == 0)
		return true;

	return false;
}

bool DefineAnoBissexto::isMultiploQuatro(int ano) {
	if (ano % 4 == 0)
		return true;

	return false;
}

bool DefineAnoBissexto::isMultiploCem(int ano) {
	if (ano % 100 == 0)
		return true;

	return false;
}

/*
 * SomaPrimeiroNumsInteiros.cpp
 *
 *  Created on: 28 de out de 2019
 *      Author: danielsantos
 */

#include "SomaPrimeiroNumsInteiros.h"
#include <list>
#include <iostream>
#include <stdint.h>
#include <stdio.h>

SomaPrimeiroNumsInteiros::SomaPrimeiroNumsInteiros() {

}

SomaPrimeiroNumsInteiros::~SomaPrimeiroNumsInteiros() {

}

int SomaPrimeiroNumsInteiros::somarNumerosInteiros(int numero) {
	int soma = 0;

	for (int i = 0; i <= numero; i++)
		soma += i;

	return soma;
}

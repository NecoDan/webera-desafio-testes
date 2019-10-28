/*
 * Util.h
 *
 *  Created on: 28 de out de 2019
 *      Author: Daniel Santos
 */

#ifndef INFRA_UTIL_H_
#define INFRA_UTIL_H_

#include <iostream>
#include <stdint.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

using namespace std;

class Util {

public:
	Util();
	virtual ~Util();

	/*############################# Métodos de Ação #############################*/

	static bool igualAZero(double valor);

	static int validaEntradaDados(int valor, string mensagem);

	static double validaEntradaDados(double valor, string mensagem);

};

#endif /* INFRA_UTIL_H_ */

/*
 * GeraMatrizTransposta.h
 *
 *  Created on: 28 de out de 2019
 *      Author: Daniel Santos
 *      Copyright: Daniel Santos - Desafio Testes Webera
 */

#ifndef DESAFIO_PROGRAMA_03_GERAMATRIZTRANSPOSTA_H_
#define DESAFIO_PROGRAMA_03_GERAMATRIZTRANSPOSTA_H_

#include <iostream>
#include <stdint.h>
#include <stdio.h>
#include <math.h>
#include <vector>

using namespace std;

class GeraMatrizTransposta {

public:

	GeraMatrizTransposta();
	virtual ~GeraMatrizTransposta();

	/*############################# Métodos de Ação #############################*/

	static void transportarMatrizNovo(int qtdeLinhas, int qtdeColunas);

private:

	static void transportarMatrizIguais(int qtdeLinhas, int qtdeColunas);
};

#endif /* DESAFIO_PROGRAMA_03_GERAMATRIZTRANSPOSTA_H_ */

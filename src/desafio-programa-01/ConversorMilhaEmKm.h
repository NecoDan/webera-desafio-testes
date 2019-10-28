/*
 * ConversorMilhaEmKm.h
 *
 *  Created on: 27 de out de 2019
 *      Author: danielsantos
 */

#ifndef DESAFIO_PROGRAMA_01_CONVERSORMILHAEMKM_H_
#define DESAFIO_PROGRAMA_01_CONVERSORMILHAEMKM_H_

class ConversorMilhaEmKm {

public:

	ConversorMilhaEmKm();

	virtual ~ConversorMilhaEmKm();

    /*############################# Métodos de Ação #############################*/

	static double converterMilhasEmKm(double valor);

	static double converterKmEmMilhas(double valor);

private:

    /*############################# Métodos de Ação #############################*/

	static bool iguaA(double primeiroValor, double segundoValor);

	static bool igualAZero(double valor);
};

#endif /* DESAFIO_PROGRAMA_01_CONVERSORMILHAEMKM_H_ */

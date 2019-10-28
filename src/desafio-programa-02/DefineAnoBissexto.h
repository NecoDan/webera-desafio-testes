/*
 * DefineAnoBissexto.h
 *
 *  Created on: 28 de out de 2019
 *      Author: danielsantos
 */

#ifndef DESAFIO_PROGRAMA_02_DEFINEANOBISSEXTO_H_
#define DESAFIO_PROGRAMA_02_DEFINEANOBISSEXTO_H_

class DefineAnoBissexto {

public:

	DefineAnoBissexto();

	virtual ~DefineAnoBissexto();

    /*############################# Métodos de Ação #############################*/

	static bool isAnoBissexto(int ano);

private:

	static bool isMultiploQuatrocentos(int ano);

	static bool isMultiploQuatro(int ano);

	static bool isMultiploCem(int ano);

};

#endif /* DESAFIO_PROGRAMA_02_DEFINEANOBISSEXTO_H_ */

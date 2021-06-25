#pragma once
#include <string>
#include "Departamento.h"

class Universidade
{
private:
	std::string nome;

	Departamento* uDepartamento;
public:
	Universidade(std::string nomeRecebido);
	~Universidade();
	std::string getNome();
	void setDepartamento(Departamento* depto);
};

#pragma once
#include <string>
#include "Principal.h"
class Departamento
{
private:
	std::string nome;

public:
	Departamento(std::string nomeRecebido);
	~Departamento();
	std::string getNome();
};


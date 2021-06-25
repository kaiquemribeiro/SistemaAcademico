#pragma once
#include <string>
#include "Universidade.h"

class Pessoa
{
private:
	std::string nome;
	int idade;
	int id;

	Universidade* pUniversidade;
	Departamento* pDepartamento;
public:
	Pessoa(std::string nomeRecebido, int idadeRecebido, int idRecebido);
	~Pessoa();
	std::string getNome();
	int getIdade();
	int getId();
	void setUniversidade(Universidade* univ);
	void setDepartamento(Departamento* dpto);
	std::string getUniversidade();
	std::string getDepartamento();
};


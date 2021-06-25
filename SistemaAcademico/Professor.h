#pragma once
#include <string>
#include "Pessoa.h"
#include "Universidade.h"
#include "Departamento.h"

class Professor : public Pessoa
{
private:
	
	Universidade* pUniversidade;
	Departamento* pDepartamento;
public:
	Professor(std::string nomeRecebido, int idadeRecebido, int idRecebido);
	Professor();
	~Professor();
	void setUniversidade(Universidade* UniversidadeRecebida);
	void setDepartamento(Departamento* DepartamentoRecebido);
	std::string getUniversidade();
	std::string getDepartamento();
};


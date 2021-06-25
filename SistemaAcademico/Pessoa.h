#pragma once
#include <string>

class Pessoa
{
protected:
	std::string nome;
	int idade;
	int id;

public:
	Pessoa(std::string nomeRecebido, int idadeRecebido, int idRecebido);
	Pessoa();
	~Pessoa();
	std::string getNome();
	int getIdade();
	int getId();
};


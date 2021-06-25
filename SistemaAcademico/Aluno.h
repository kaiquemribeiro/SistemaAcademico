#pragma once
#include "Pessoa.h"

class Aluno : public Pessoa
{
private:
	int ra;
public:
	Aluno(std::string nomeRecebido, int idadeRecebido, int idRecebido);
	Aluno();
	~Aluno();
	int getRa();
	void setRa(int raRecebido);
};


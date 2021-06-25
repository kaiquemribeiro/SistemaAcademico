#include "Aluno.h"

Aluno::Aluno(std::string nomeRecebido, int idadeRecebido, int idRecebido) :
	Pessoa(nomeRecebido, idadeRecebido, idRecebido)
{
	ra = 0;
}

Aluno::Aluno() :
	Pessoa()
{
	ra = 0;
}

Aluno::~Aluno()
{

}

int Aluno::getRa()
{
	return ra;
}

void Aluno::setRa(int raRecebido)
{
	ra = raRecebido;
}


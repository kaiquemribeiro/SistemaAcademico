#include "Universidade.h"

Universidade::Universidade(std::string nomeRecebido)
{
	nome = nomeRecebido;
}

Universidade::~Universidade()
{

}

std::string Universidade::getNome()
{
	return nome;
}

void Universidade::setDepartamento(Departamento* dpto)
{
	uDepartamento = dpto;
}
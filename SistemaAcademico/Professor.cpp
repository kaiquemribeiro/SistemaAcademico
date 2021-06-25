#include "Professor.h"

Professor::Professor(std::string nomeRecebido, int idadeRecebido, int idRecebido) :
	Pessoa(nomeRecebido, idadeRecebido, idRecebido)
{
	pUniversidade = NULL;
	pDepartamento = NULL;
}

Professor::Professor() :
	Pessoa()
{
	pUniversidade = NULL;
	pDepartamento = NULL;
}

Professor::~Professor()
{
}
void Professor::setUniversidade(Universidade* UniversidadeRecebida)
{
	pUniversidade = UniversidadeRecebida;
}

void Professor::setDepartamento(Departamento* DepartamentoRecebido)
{
	pDepartamento = DepartamentoRecebido;
}

std::string Professor::getUniversidade()
{
	return pUniversidade->getNome();
}

std::string Professor::getDepartamento()
{
	return pDepartamento->getNome();
}
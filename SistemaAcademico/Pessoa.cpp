#include "Pessoa.h"
#include "Universidade.h"

Pessoa::Pessoa(std::string nomeRecebido, int idadeRecebido, int idRecebido)
{
	nome = nomeRecebido;
	idade = idadeRecebido;
	id = idRecebido;
}

Pessoa::~Pessoa() 
{

}

std::string Pessoa::getNome() 
{
	return nome;
}

int Pessoa::getIdade()
{
	return idade;
}

int Pessoa::getId()
{
	return id;
}

void Pessoa::setDepartamento(Departamento* dpto)
{
	pDepartamento = dpto;
}

void Pessoa::setUniversidade(Universidade* univ)
{
	pUniversidade = univ;
}

std::string Pessoa::getUniversidade() 
{
	return pUniversidade->getNome();
}

std::string Pessoa::getDepartamento()
{
	return pDepartamento->getNome();
}
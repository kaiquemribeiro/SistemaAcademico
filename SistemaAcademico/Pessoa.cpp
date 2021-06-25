#include "Pessoa.h"
#include "Universidade.h"

Pessoa::Pessoa(std::string nomeRecebido, int idadeRecebido, int idRecebido)
{
	nome = nomeRecebido;
	idade = idadeRecebido;
	id = idRecebido;
}

Pessoa::Pessoa() 
{

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
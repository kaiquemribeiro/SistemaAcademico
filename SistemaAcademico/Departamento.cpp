#include "Departamento.h"

Departamento::Departamento(std::string nomeRecebido)
{
	nome = nomeRecebido;
}

Departamento::~Departamento()
{

}

std::string Departamento::getNome()
{
	return nome;
}


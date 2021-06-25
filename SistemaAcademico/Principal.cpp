#include "Principal.h"
#include "Pessoa.h"
#include "Departamento.h"
#include "Universidade.h"
#include <iostream>

using std::cout;
using std::endl;
using std::string;

Principal::Principal()
{	
	executar();
}

Principal::~Principal()
{

}

void Principal::executar()
{
	string nome = "Kaique";
	string nomeU = "UTFPR";
	string nomeD = "DAINF";
	int idade = 24;
	int id = 2028441;
	Pessoa novaPessoa(nome, idade, id);
	Universidade novaUniversidade(nomeU);
	Departamento novoDepartamento(nomeD);
	novaPessoa.setDepartamento(&novoDepartamento);
	novaPessoa.setUniversidade(&novaUniversidade);

	cout << "Nome: " << novaPessoa.getNome() << endl;
	cout << "Idade: " << novaPessoa.getIdade() << endl;
	cout << "ID: " << novaPessoa.getId() << endl;
	cout << "Universidade: " << novaPessoa.getUniversidade() << endl;
	cout << "Departamento: " << novaPessoa.getDepartamento() << endl;
}
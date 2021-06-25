#include "Principal.h"
#include "Departamento.h"
#include "Universidade.h"
#include "Professor.h"
#include "Aluno.h"
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
	Professor novoProfessor(nome, idade, id);
	Universidade novaUniversidade(nomeU);
	Departamento novoDepartamento(nomeD);
	novoProfessor.setUniversidade(&novaUniversidade);
	novoProfessor.setDepartamento(&novoDepartamento);

	cout << "Nome: " << novoProfessor.getNome() << endl;
	cout << "Idade: " << novoProfessor.getIdade() << endl;
	cout << "ID: " << novoProfessor.getId() << endl;
	cout << "Universidade: " << novoProfessor.getUniversidade() << endl;
	cout << "Departamento: " << novoProfessor.getDepartamento() << endl;

	cout << endl;

	string nomeAluno = "Kaique Ribeiro";
	int idAluno = 2;
	int idadeAluno = 22;
	Aluno novoAluno(nomeAluno, idadeAluno, idAluno);
	novoAluno.setRa(202844500);
	
	cout << "Nome: " << novoAluno.getNome() << endl;
	cout << "Idade: " << novoAluno.getIdade() << endl;
	cout << "ID: " << novoAluno.getId() << endl;
	cout << "RA: " << novoAluno.getRa() << endl;

	cout << "****************************" << endl;

}
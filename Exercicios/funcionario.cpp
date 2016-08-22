#include "funcionario.h"
funcionario::funcionario(string name, float salary){
	cout << "Funcionario criado com sucesso" << endl;
	nome = name;
	salario = salary;
}

void funcionario::setSalario(float salary){
	salario = salary;
}

string funcionario::getNome(){
	return nome;
}

float funcionario::getSalario(){
	return salario;
}

void funcionario::print(){
	cout << "Funcionario" << endl;
	cout << "Nome:" << nome << endl;
	cout << "Salario:" << salario << endl;
	cout << "Data de admissao:" << f->getDate() << endl;
}

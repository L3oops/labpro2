#include "empresa.h"

empresa::empresa(string nombre, int _cnpj){
	name = nome_emp;
	cnpj = _cnpj;
f = new funcionario ("Geromito", 300.00);
for (int i=0; i<2; i++)
	p[i] = new funcionario ("Luan", 700.00);
}

int empresa::getCNPJ(){
	return CNPJ;
}

void empresa::setCNPJ(int _cnpj){
	cnpj = _cnpj
}

void empresa::getNome(){
	return nome;
}

void empresa::print(){
	cout << "Empresa" << endl;
	cout << "Nome:" << nome << endl;
	cout << "CNPJ:" << CNPJ << endl;
}

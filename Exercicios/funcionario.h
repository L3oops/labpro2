#ifndef __FUNCIONARIO_H__
#define __FUNCIONARIO_H__
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
class funcionario{
private:
	string nome;
	float salario;
	data *ADM;
public:
funcionario(string name = "Ze Ninguem", float salary = 0 );	
	
	string getNome();
	float getSalario();
	float setSalario();
	data.getDate();
	data.setDate();
	void print();
};
#endif	

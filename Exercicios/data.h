#ifndef __DATA_H__
#define __DATA_H__
#include <stdio.h>
#include <iostream>
using namespace std;
class Data{
private:
	int dia, mes, ano;
public:
	Data(int _dia=1, int _mes=1, int _ano = 2000);
	int getDia();
	int getMes();
	int getAno();
	void setDia(int d);
	void setMes(int m);
	void setAno(int a);
	string toString();
};

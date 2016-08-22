#include "data.h"
data::data(int _dia, int _mes, int _ano){
dia = _dia;
mes = _mes;
ano = _ano;
}

data::getDia(){
	return dia;
}
data::getMes(){
	return mes;
}
data::getAno(){
	return ano;
}
data::setDia(int _dia){
dia = _dia;
}
data::setMes(int _mes){
mes = _mes;
}
data::setAno(int _ano){
ano = _ano;
}


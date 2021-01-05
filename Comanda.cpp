#include "Comanda.h"

/*Comanda::Comanda()
{
	this->cod_com = 0;
	this->data_com = "2 ian. 2021";
	this->adresa = "Barosani, str. Smecherilor, nr.17";
	this->val_com = 0;
}*/

float Comanda::calculeazaValoareComanda()
{
	val_com += val_com + nr_pr * pret; //sau cantitate in loc de nr_pr?
	return val_com;
}

Comanda::Comanda(int cod_com, string data_com, string adresa, float val_com)
	:Client(cod_cl, nume, nr_pr, data_com, tel, mail, adresa)
{
	this->cod_com = cod_com;
	this->val_com = val_com;
}

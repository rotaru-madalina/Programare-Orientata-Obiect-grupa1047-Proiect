#include "Electrocasnice.h"

Electrocasnice::Electrocasnice() :Produs(cod_pr, pret, den_pr, cantitate)
{
	this->kW = 0;
}

Electrocasnice::Electrocasnice(int cod_pr, float pret, const char* den_pr, int cantitate, float kW) : Produs(cod_pr, pret, den_pr, cantitate)
{
	this->kW = kW;
}

Electrocasnice::Electrocasnice(const Electrocasnice& e) : Produs(e)
{
	this->kW = e.kW;
}

Electrocasnice& Electrocasnice::operator=(Electrocasnice& e)
{
	if (this != &e)
	{
		Produs::operator=(e);
		this->kW = e.kW;
	}
	return *this;
}

Electrocasnice::~Electrocasnice()
{
}

/*ostream& operator<<(ostream& iesire, Electrocasnice e)
{
	iesire << "Electrocasnicul: ";
	iesire << (Produs)e;
	iesire << "Are consumul electric: " << e.kW;
	return iesire;
}*/

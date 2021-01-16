/*#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<fstream>*/
#include "Magazin.h"

Magazin::Magazin()
{
	this->cod_mag = 0;
	this->den_mag = "Default den_mag value";

	this->loc = new char[strlen("Locatie anonima") + 1];
	strcpy_s(this->loc, strlen("Locatie anonima") + 1, "Locatie anonima");

	this->nr_ang = 0;
}

Magazin::Magazin(int cod_mag, string den_mag, const char* loc, int nr_ang)
{
	this->cod_mag = cod_mag;
	this->den_mag = den_mag;

	this->loc = new char[strlen(loc) + 1];
	strcpy_s(this->loc, strlen(loc) + 1, loc);
	this->nr_ang = nr_ang;
}

Magazin::Magazin(const Magazin& m)
{
	this->cod_mag = m.cod_mag;
	this->den_mag = m.den_mag;

	this->loc = new char[strlen(m.loc) + 1];
	strcpy_s(this->loc, strlen(m.loc) + 1, m.loc);
	this->nr_ang = m.nr_ang;
}

Magazin::~Magazin()
{
	if (this->loc != nullptr) {
		delete[] loc;
	}
}

Magazin& Magazin::operator=(const Magazin& m)
{
	if (this != &m) {
		if (this->loc != nullptr) {
			delete[] loc;
		}

		this->cod_mag = m.cod_mag;
		this->den_mag = m.den_mag;

		this->loc = new char[strlen(m.loc) + 1];
		strcpy_s(this->loc, strlen(m.loc) + 1, m.loc);
		this->nr_ang = m.nr_ang;
	}
	return *this;
}
void Magazin::scrieInFisierBinar(ofstream& iesire)
{
	iesire.write((char*)&cod_mag, sizeof(cod_mag));

	int dim1 = den_mag.size() + 1; //+1 - pt '\0'
	iesire.write((char*)&dim1, sizeof(dim1));
	iesire.write(den_mag.c_str(), dim1);
 

	int dim2 = strlen(loc) + 1; //+1 - pt '\0'
	iesire.write((char*)&dim2, sizeof(dim2));
	iesire.write(loc, dim2);

	iesire.write((char*)&nr_ang, sizeof(nr_ang));
}

void Magazin::citireDinFisierBinar(ifstream& citire)
{
	citire.read((char*)&cod_mag, sizeof(cod_mag));
	
	int dim1 = 0;
	citire.read((char*)&dim1, sizeof(dim1));
	char aux1[100];
	citire.read(aux1, dim1);
	den_mag = aux1;

	int dim2 = 0;
	citire.read((char*)&dim2, sizeof(dim2));
	char aux2[100];
	citire.read(aux2, dim2);
	if (loc != nullptr) {
		delete[] loc;
	}
	loc = new char[dim2];
	strcpy_s(loc, dim2, aux2);

	citire.read((char*)&nr_ang, sizeof(nr_ang));

}

ostream& operator<<(ostream& iesire, Magazin& m)
{
	iesire << "Cod mag.: " << m.cod_mag << " denumire mag.: " 
		<< m.den_mag << " locatie: " << m.loc 
		<< " nr. angajati: " << m.nr_ang << endl;

	return iesire;
}

istream& operator>>(istream& citire, Magazin& m)
{
	char aux[100];
	cout << "Cod Magazin:"; citire >> m.cod_mag;
	cout << "Denumire magazin:"; citire >> m.den_mag;

	cout << "Locatie magazin:"; citire >> aux;
	delete[] m.loc;
	m.loc = new char[strlen(aux) + 1];
	strcpy_s(m.loc, strlen(aux) + 1, aux);

	cout << "Nr angajati:"; citire >> m.nr_ang;

	return citire;
}

ofstream& operator<<(ofstream& iesire, Magazin& m)
{
	iesire << m.cod_mag << endl << m.den_mag << endl 
		<< m.loc << endl << m.nr_ang << endl;
	return iesire;
}

ifstream& operator>>(ifstream& citire, Magazin& m)
{
	citire >> m.cod_mag;

	getline(citire, m.den_mag); //din libraria string

	citire.ignore();

	char aux[100];
	citire.getline(aux, 100);//din libraria istream

	if (m.loc != nullptr) {
		delete[] m.loc;
	}
	m.loc = new char[strlen(aux) + 1];
	strcpy_s(m.loc, strlen(aux) + 1, aux);

	citire >> m.nr_ang;

	return citire;
}

#include "Produs.h"

Produs::Produs()
{
	this->cod_pr = 0;
	this->pret = 0;

	this->den_pr = new char[strlen("Denumire necunoscuta") + 1];
	strcpy_s(this->den_pr, strlen("Denumire necunoscuta") + 1, "Denumire necunoscuta");

	this->cantitate = 0;
}


Produs::Produs(int cod_pr, float pret, const char* den_pr, int cantitate)
{
	this->cod_pr = cod_pr;
	this->pret = pret;

	this->den_pr = new char[strlen(den_pr) + 1];
	strcpy_s(this->den_pr, strlen(den_pr) + 1, den_pr);
	this->cantitate = cantitate;
}

Produs::Produs(const Produs& p)
{
	this->cod_pr = p.cod_pr;
	this->pret = p.pret;

	this->den_pr = new char[strlen(p.den_pr) + 1];
	strcpy_s(this->den_pr, strlen(p.den_pr) + 1, p.den_pr);
	this->cantitate = p.cantitate;
}

Produs::~Produs()
{
	if (this->den_pr != nullptr) {
		delete[] den_pr;
	}
}

Produs& Produs::operator=(const Produs& p)
{
	if (this != &p) {
		if (this->den_pr != nullptr) {
			delete[] den_pr;
		}

		this->cod_pr = p.cod_pr;
		this->pret = p.pret;

		this->den_pr = new char[strlen(p.den_pr) + 1];
		strcpy_s(this->den_pr, strlen(p.den_pr) + 1, p.den_pr);
		this->cantitate = p.cantitate;
	}
	return *this;
}

/*Produs& Produs::operator+(Produs produs)
{
	Produs* p = new Produs(*this);
	p->cod_pr = p->cod_pr + " si " + produs.cod_pr; <-apare o eroare aici si nu inteleg de ce
	return* p;
}*/

const Produs Produs::operator++()
{
	this->cantitate++;
	return *this;
}

const Produs Produs::operator++(int)
{
	Produs aux(*this);
	this->cantitate++;

	return aux;
}

/*bool Produs::operator==(Produs& produs)
{
	if (this == &produs) {
		return true;
	}

	bool CampuriNormale = strcmp(this->den_pr, produs.den_pr) == 0 &&
		this->cod_pr == produs.cod_pr &&
		this->pret == produs.pret &&
		this->cantitate == produs.cantitate;

	if (CampuriNormale) {
		for (int i = 0; i < cantitate; i++) {
			if (this->pret[i] != produs.pret[i]) { //apare o eroare aici
				return false;
			}
		}
		return true;
	}
	return false;
}*/

char& Produs::operator[](int index)
{
	if (index >= 0 && index < cantitate) {
		return den_pr[index];

	}
	else {
		throw new exception("Eroare: index < 0 sau > cantitate disponibila");
	}
}

/*void Produs::operator()(int valoare)
{
	if (valoare >= 15 && valoare <= 30) {
		for (int i = 0;i < cantitate;i++) {
			pret[i] += valoare;
		}
	}
	else {
		throw new exception("Eroare: nu poti creste un pret cu >30 lei");
	}
}*/

void Produs::scrieInFisierBinar(ofstream& iesire)
{
	iesire.write((char*)&cod_pr, sizeof(cod_pr));

	iesire.write((char*)&pret, sizeof(pret));

	int dim1 = strlen(den_pr) + 1; //+1 - pt '\0'
	iesire.write((char*)&dim1, sizeof(dim1));
	iesire.write(den_pr, dim1);

	iesire.write((char*)&cantitate, sizeof(cantitate));
}

void Produs::citireDinFisierBinar(ifstream& citire)
{
	citire.read((char*)&cod_pr, sizeof(cod_pr));
	citire.read((char*)&pret, sizeof(pret));

	int dim1 = 0;
	citire.read((char*)&dim1, sizeof(dim1));
	char aux1[100];
	citire.read(aux1, dim1);
	den_pr = aux1;
	if (den_pr != nullptr) {
		delete[] den_pr;
	}
	den_pr = new char[dim1];
	strcpy_s(den_pr, dim1, aux1);

	citire.read((char*)&cantitate, sizeof(cantitate));
}

double Produs::calculeazaPretDupaDiscount(double discount)
{
	pret -= pret * discount / 100 + 100;
	return pret;
}

ostream& operator<<(ostream& iesire, Produs& p)
{
	iesire << "Cod produs: " << p.cod_pr << " pret pr.: "
		<< p.pret << " denumire pr.: " << p.den_pr
		<< " cantitate: " << p.cantitate << endl;

	return iesire;
}

istream& operator>>(istream& citire, Produs& p)
{
	char aux[100];
	cout << "Cod Produs:"; citire >> p.cod_pr;

	cout << "Denumire produs:"; citire >> aux;
	delete[] p.den_pr;
	p.den_pr = new char[strlen(aux) + 1];
	strcpy_s(p.den_pr, strlen(aux) + 1, aux);

	cout << "Pret:"; citire >> p.pret;
	cout << "Cantitate:"; citire >> p.cantitate;

	return citire;

}

ofstream& operator<<(ofstream& iesire, Produs& p)
{
	iesire << p.cod_pr << endl << p.pret << endl
		<< p.den_pr << endl << p.cantitate << endl;
	return iesire;
}

ifstream& operator>>(ifstream& citire, Produs& p)
{
	citire >> p.cod_pr;

	citire >> p.pret;

	//citire.ignore();

	char aux[100];
	citire.getline(aux, 100);//din libraria istream

	if (p.den_pr != nullptr) {
		delete[] p.den_pr;
	}
	p.den_pr = new char[strlen(aux) + 1];
	strcpy_s(p.den_pr, strlen(aux) + 1, aux);

	citire >> p.cantitate;

	return citire;
}
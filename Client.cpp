#include "Client.h"

Client::Client()
{
	this->cod_cl = 0;

	this->nume = new char[strlen("Anonim") + 1];
	strcpy_s(this->nume, strlen("Anonim") + 1, "Anonim");

	this->nr_pr = 0;

	this->data_com = "2 ian. 2021";

	this->tel = new char[strlen("0711111111") + 1];
	strcpy_s(this->tel, strlen("0711111111") + 1, "0711111111");

	this->mail = "florin.cuceritorul@gmail.com";
	this->adresa = "Barosani, str. Smecherilor, nr.17";

}

Client::Client(int cod_cl, const char* nume, int nr_pr, 
	string data_com, const char* tel, string mail, string adresa)
{
	this->cod_cl = cod_cl;

	this->nume = new char[strlen(nume) + 1];
	strcpy_s(this->nume, strlen(nume) + 1, nume);

	this->nr_pr = nr_pr;

	this->data_com = data_com;

	this->tel = new char[strlen(tel) + 1];
	strcpy_s(this->tel, strlen(tel) + 1, tel);

	this->mail = mail;
	this->adresa = adresa;
}

Client::Client(const Client& c)
{
	this->cod_cl = c.cod_cl;

	this->nume = new char[strlen(c.nume) + 1];
	strcpy_s(this->nume, strlen(c.nume) + 1, c.nume);

	this->nr_pr = c.nr_pr;

	this->data_com = c.data_com;

	this->tel = new char[strlen(c.tel) + 1];
	strcpy_s(this->tel, strlen(c.tel) + 1, c.tel);

	this->mail = c.mail;
	this->adresa = c.adresa;
}

Client::~Client()
{
	if (this->nume != nullptr) {
		delete[] nume;
	}
	if (this->tel != nullptr) {
		delete[] tel;
	}
}

Client& Client::operator=(const Client& c)
{
	if (this != &c) {
		if (this->nume != nullptr) {
			delete[] nume;
		}

		this->cod_cl = c.cod_cl;

		this->nume = new char[strlen(c.nume) + 1];
		strcpy_s(this->nume, strlen(c.nume) + 1, c.nume);

		this->nr_pr = c.nr_pr;

		this->data_com = c.data_com;

		this->tel = new char[strlen(c.tel) + 1];
		strcpy_s(this->tel, strlen(c.tel) + 1, c.tel);

		this->mail = c.mail;
		this->adresa = c.adresa;
	}
	return *this;
}

char* Client::getNume()
{
	return nume;
}

void Client::setNume(char* nume)
{
	if (nume != nullptr) {
		delete[] this->nume;
		this->nume = new char[strlen(nume) + 1];
		strcpy_s(this->nume, strlen(nume) + 1, nume);
	}
	else {
		throw new exception("Numele primit este null");
	}
}

char* Client::getTel()
{
	return tel;
}

void Client::setTel(char* tel)
{
	if (tel != nullptr) {
		delete[] this->tel;
		this->tel = new char[strlen(tel) + 1];
		strcpy_s(this->tel, strlen(tel) + 1, tel);
	}
	else {
		throw new exception("Telefonul primit este null");
	}
}

string Client::getData_Com()
{
	return data_com;
}

void Client::setData_Com(string data_com)
{
	if (data_com.empty()) {
		throw new exception("Data comenzii primita este null.");
	}
	this->data_com = data_com;
}

string Client::getMail()
{
	return mail;
}

void Client::setMail(string mail)
{
	if (mail.empty()) {
		throw new exception("Adresa de mail primita e null.");
	}
	this->mail = mail;
}

int Client::getNr_Pr()
{
	return nr_pr;
}

void Client::setNr_Pr(int nr_pr)
{
	this->nr_pr = nr_pr;
}

string Client::getAdresa()
{
	return adresa;
}

void Client::setAdresa(string adresa)
{
	if (adresa.empty()) {
		throw new exception("Adresa primita este goala.");
	}
	this->adresa = adresa;
}


ostream& operator<<(ostream& iesire, Client& c)
{
	iesire << "Cod client: " << c.cod_cl << "  nume: "
		<< c.nume << "  a comandat: " << c.nr_pr <<" produse, "
		<< " la data de: " << c.data_com <<" cu nr de tel:"<< c.tel
		<<", adresa mail:"<<c.mail<<", de la adresa:"<<c.adresa<< endl;

	return iesire;
}

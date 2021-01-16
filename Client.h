#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<fstream>
#include<string>

using namespace std;

class Client
{
public:
	int cod_cl;
	char* nume;
	int nr_pr;
	string data_com;
	char* tel;
	string mail;
	string adresa;

	Client(); //constructor default

	Client(int cod_cl, const char* nume, int nr_pr,
		string data_com, const char* tel, string mail, string adresa); //constructor

	Client(const Client& c); //constructor copiere

	~Client(); //destructor

	Client& operator=(const Client& c); //operator =

	friend ostream& operator<<(ostream& iesire, Client& c); //pe ecran

	friend istream& operator>>(istream& citire, Client& c); //citire de la tastatura

	char* getNume();
	void setNume(char* nume);

	char* getTel();
	void setTel(char* tel);

	string getData_Com();
	void setData_Com(string data_com);

	string getMail();
	void setMail(string mail);

	int getNr_Pr();
	void setNr_Pr(int nr_pr);

	string getAdresa();
	void setAdresa(string adresa);
};


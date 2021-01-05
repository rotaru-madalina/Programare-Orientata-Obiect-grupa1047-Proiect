#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<fstream>
#include<string>

#include "InterfataDiscount.h"

using namespace std;

class Produs : InterfataDiscount
{
public:
	int cod_pr;
	float pret;
	char* den_pr;
	int cantitate;

	Produs(); //constructor default

	Produs(int cod_pr, float pret, const char* den_pr, int cantitate); //constructor

	Produs(const Produs& p); //constructor copiere

	~Produs(); //destructor

	Produs& operator=(const Produs& p); //operator =

	// Produs& operator+(const Produs produs); //operator + -> codurile adunate

	const Produs operator++(); //operator ++ pre-incrementare pt cantitate

	const Produs operator++(int); //operator ++ post-incrementat pt cantitate

	bool operator==(Produs& produs); //apare o eroare aici

	char& operator[](int index); //operator []

	void operator()(int valoare);

	//void adaugareProdus(double produs);

	friend ostream& operator<<(ostream& iesire, Produs& p); //pe ecran

	friend ofstream& operator<<(ofstream& iesire, Produs& p); //in fisier

	friend ifstream& operator>>(ifstream& citire, Produs& p); //din fisier

	void scrieInFisierBinar(ofstream& iesire);

	void citireDinFisierBinar(ifstream& citire);

	double calculeazaPretDupaDiscount(double discount);
};


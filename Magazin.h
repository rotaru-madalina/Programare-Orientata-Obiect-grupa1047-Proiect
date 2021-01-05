#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<fstream>
#include<string>

using namespace std;

class Magazin
{
public:
	int cod_mag;
	string den_mag;
	char* loc;
	int nr_ang;

	Magazin(); //constructor default

	Magazin(int cod_mag, string den_mag, const char* loc, int nr_ang); //constructor

	Magazin(const Magazin& m); //constructor copiere

	~Magazin(); //destructor

	Magazin& operator=(const Magazin& m); //operator =

	friend ostream& operator<<(ostream& iesire, Magazin& m); //pe ecran

	friend ofstream& operator<<(ofstream& iesire, Magazin& m); //in fisier

	friend ifstream& operator>>(ifstream& citire, Magazin& m); //din fisier

	void scrieInFisierBinar(ofstream& iesire);

	void citireDinFisierBinar(ifstream& citire);
};


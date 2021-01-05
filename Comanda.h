#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<fstream>
#include<string>
#include "Produs.h"
#include "Client.h"
#include "InterfataValoareComanda.h"

using namespace std;

class Comanda: public Client, public Produs
{
	//mostenire din 2 clase
public: 
	int cod_com;
	float val_com;

	//Comanda(); //constructor default

	Comanda(int cod_com, string data_com, string adresa, float val_com); //constructor

	float calculeazaValoareComanda( );

};


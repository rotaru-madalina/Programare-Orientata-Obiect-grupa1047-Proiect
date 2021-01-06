#include "Tablete.h"



Tablete::Tablete(int cod_pr, float pret, const char* den_pr, int cantitate, int inch, float* dim) :Produs(cod_pr, pret, den_pr, cantitate)
{
	this->inch = inch;
	if (dim == nullptr && inch <= 0)
		throw new exception("Eroare: dimenziunea este nula sau nr inch este introdus gresit.");
	this->dim = new float[inch];
	for (int i = 0; i < inch;i++)
		this->dim[i] = dim[i];
}

Tablete::Tablete(const Tablete& t) : Produs(t)

{
	this->inch = t.inch;
	this->dim = new float[t.inch];
	for (int i = 0; i < t.inch;i++)
		this->dim[i] = t.dim[i];
}

Tablete::Tablete() :Produs(cod_pr, pret, den_pr, cantitate)
{

}


Tablete& Tablete::operator=(Tablete& t)
{
	if (this != &t)
	{
		delete[] this->dim;
		Produs::operator=(t);
		this->inch = t.inch;
		this->dim = new float[t.inch];
		for (int i = 0; i < t.inch;i++)
		{
			this->dim[i] = t.dim[i];
		}

	}
	return *this;
}

Tablete::~Tablete()
{
	if (this->dim != nullptr)
		delete[] this->dim;
}

float* Tablete::getDimensiune()
{
	return dim;
}

void Tablete::setDimensiuni(float* dim, int inch)
{
	if (dim != nullptr && inch > 0)
	{
		this->inch = inch;
		delete[] this->dim;
		this->dim = new float[inch];
		for (int i = 0; i < inch;i++)
		{
			this->dim[i] = dim[i];
		}

	}
	else
		throw new exception("Exceptie: dimensiunea sau inch nu sunt corecte.");
}

//Tablete& Tablete::operator[](int index)
//{
//	
//	if (index > 0 && index < cantitate)
//	{
//		return this->dim[index];
//	}
//	else
//		throw new exception("Eroare: indexul nu corespunde.");
//	
//}

/*ostream& operator<<(ostream& out, Tablete t)
{

	out << "\t Tableta: " << endl;
	out << (Produs)t;
	out << "Are nr dim in inch: " << t.inch << ", asadar are urmatoarele dimensiuni:" << endl;
	for (int i = 0;i < t.inch;i++)
	{
		out << "Dimensiunea " << i + 1 << ":" << t.dim[i] << endl;
	}
	return out;

}*/
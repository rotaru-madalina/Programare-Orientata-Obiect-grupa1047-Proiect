
//int main()
//{
//	cout << "-----------------------------Produse-----------------------";
//	Produs p1, p2;
//	Produs p3(1000, 499.99, "Aragaz", 50);
//	Produs p4(2000, 999.99, "Frigider", 50);
//	cout << p1 << endl << p2 << endl << p3 << endl << p4 << endl;
//	cout << "operator = din produs"<<endl;
//	p1 = p3;
//	cout << "p1 este:\t" << p1<<endl;
//	cout << "Constructor de copiere din produs "<<endl;
//	Produs p5 = p4;
//	cout << "p5 este:\t" << p5 << endl;
//	
//	cout << "------------------Electrocasnice------------------------------------";
//	cout << endl << endl << "Constructor & defalt din electrocasnice" << endl;
//	Electrocasnice e1, e2,e6; 
//	Electrocasnice e3(1111, 499.9, "Microunde", 30, 750.5);
//	Electrocasnice e4(2222, 1099.9, "Combina_frigorifica", 20, 900.9);
//	cout << "e1:  " << e1 << endl << "e2:   " << e2 << endl << "e3:   " << e3 << endl << "e4:   " << e4 << endl;
//	cout << "constructor de copiere din electrocasnice:" << endl;
//	Electrocasnice e5 = e3;
//	cout << "e5:   " << e5 << endl;
//	cout << "operator = din electrocasnice: "<<endl;
//	e1 = e3;
//	cout << "e1 dupa op=:  " << e1 << endl;
//	cin >> e6;
//	cout << "Operator>>: " << endl << e6;
//	
//	cout << "----------------------Laptop-----------------------------------------";
//
//	cout << endl << endl << "Constructor & defalt din laptop" << endl;
//	Laptop l1,l2,l6;
//	Laptop l3(1222, 3299.99, "Laptop HP", 70, "Free DOS","AMD Ryzen",8);
//	Laptop l4(1333, 1999.99, "Laptop Lenovo", 50, "Free DOS", "AMD Ryzen", 4);
//	cout << "l1:  " << l1 << endl << "l2:   " << l2 << endl << "l3:   " << l3 << endl << "l4:   " << l4 << endl;
//	cout << "constructor de copiere din laptop:" << endl;
//	Laptop l5 = l3;
//	cout << "l5:   " << l5 << endl;
//	cout << "operator = din laptop: " << endl;
//	l1 = l3;
//	cout << "l1 dupa op=:  " << l1 << endl;
//
//	cout << "Getteri si setteri" << endl;
//	cout << "Sistemul de operare al laptopului: "<<l3.getDenumireLaptop()<<" este: " << l3.getSistemOperareLaptop() << endl;
//	l2.setCod(1234);
//	char den[] = { "Laptop Asus" };
//	l2.setDenumire(den);
//	l2.setmem_l(32);
//	l2.setPret(1259.99);
//	char proc[] = { "Intel Celeron " };
//	l2.setprocesor(proc);
//	char so[] = { "Windows 10 Pro" };
//	l2.setso_l(so);
//	cout << "l2 dupa setteri: " << endl << l2 << endl;
//	cin >> l6;
//	cout << "Operator>>: " << endl << l6;
//	cout << "-------------------------Tablete--------------------------------------";
//	cout << endl << endl << "Constructor & defalt din tablete" << endl;
//	Tablete t1, t2,t6;
//	float d1[] = { 5.2,7.5,0.1 };
//	Tablete t3(1122, 600.99, "Tableta Lenovo", 40, 3,d1);
//	float d2[] = { 4.5,6.7,0.1 };
//	Tablete t4(1133, 1200.99, "Tableta Samsung Galaxy", 60, 3,d2);
//	cout << "t1:  " << t1 << endl << "t2:   " << t2 << endl << "t3:   " << t3 << endl << "t4:   " << t4 << endl;
//	cout << "constructor de copiere din tablete:" << endl;
//	Tablete t5 = t3;
//	cout << "t5:   " << t5 << endl;
//	cout << "operator = din tablete: " << endl;
//	t1 = t3;
//	cout << "t1 dupa op=:  " << t1 << endl;
//	cout << endl << endl << "Getteri si setteri:" << endl;
//	float dim[] = { 3.2,5.3,0.2,6.5,7.2 };
//	cout << "Pentru produsul cu codul: " << t4.getCod() << " setati dimensiunile :"<< endl;
//	t4.setDimensiuni (dim, 3);
//	cout << t4;
//	cin >> t6;
//	cout << "Operator>>: " << endl << t6;
//	cout << "---------------------------Telefoane--------------------------------------";
//
//	cout << endl << endl << "Constructor & defalt din Telefoane" << endl;
//	Telefoane tl1, tl2,tl6;
//	Telefoane tl3(1112, 700.01, "Samsung Galaxy A10", 80, "Android 9",10 , "LCD" ,"Samsung Exynos", 32);
//	Telefoane tl4(1113, 3199.99, "Apple iPhone 11", 90, "iOS12",12,"IPS", "Apple A12 Bionic", 64);
//	cout << "tl1:  " << tl1 << endl << "tl2:   " << tl2 << endl << "tl3:   " << tl3 << endl << "tl4:   " << tl4 << endl;
//	cout << "constructor de copiere din telefoane:" << endl;
//	Telefoane tl5 = tl3;
//	cout << "tl5:   " << tl5 << endl;
//	cout << "operator = din telefoane: " << endl;
//	tl1 = tl3;
//	cout << "tl1 dupa op=:  " << tl1 << endl;
//	cout << endl << endl << "Getteri si setteri:" << endl;
//	cout << " tl3 are sistemul de operare: " << tl3.getSOtelefon() << " si camera: " << tl3.getCamera() <<" MP."<< endl;
//	tl1.setCamera(15);
//	char so2[] = { "Android" };
//	tl1.setSOtelefon(so2);
//	cout << "tl1 dupa setteri:  " << tl1 << endl;
//	cin >> tl6;
//	cout << "Operator>>: " << endl << tl6;
//	cout << "===============================POLIMORFISM=====================================================" << endl;
//	Produs* pp1 = new Produs(00001, 555.55, "Produs_1", 50);
//	Produs* pp2 = new Electrocasnice (00002, 1111.11, "Produs_2", 30,700.2);
//	Produs* pp3 = new Laptop (00003, 999.99, "Produs_3", 70,"Dos","AMD",8);
//	float tst[] = { 5.3,7.6,0.2,6.3 };
//	Produs* pp4 = new Tablete(00004, 333.33, "Produs_4", 30,3,tst);
//
//	Produs* pp5 = new Telefoane(00005, 222.22, "Produs_5", 20,"Android",12,"LCD","Samsung Exynos",32);
//	//pp1 = &p3;
//	//pp2 = &p4;
//	cout << "\nFolosind obiecte si pointeri la obiecte: ";
//	//p3.calculeazaPretDupaDiscount(3); 
//	//p4.calculeazaPretDupaDiscount(3); 
//
//	pp1->calculeazaPretDupaDiscount(3);
//	pp2->calculeazaPretDupaDiscount(3);
//	pp3->calculeazaPretDupaDiscount(3);
//	pp4->calculeazaPretDupaDiscount(3);
//	pp5->calculeazaPretDupaDiscount(3);
//
//	Electrocasnice* pel1,*pel2;	
//	pel1 = &e3;	
//	pel2 = &e4;
//	cout << "INAINTE:  " << e3 << endl;
//	e3.calculeazaPretDupaDiscount(3);
//	cout << "DUPA:   " << e3 << endl;
//	pel1->calculeazaPretDupaDiscount(3);
//	cout << "INAINTE:  " << e4 << endl;
//	e4.calculeazaPretDupaDiscount(3); 
//	cout << "DUPA:   " << e4 << endl;
//	pel2->calculeazaPretDupaDiscount(3);
//
//
//	Laptop * plp1,*plp2;
//	plp1 = &l3;
//	plp2 = &l4;
//	cout << "INAINTE:  " <<tl3 << endl;
//	l3.calculeazaPretDupaDiscount(3);
//	cout << "DUPA:   " << l3 << endl;
//	plp1->calculeazaPretDupaDiscount(3);
//	cout << "INAINTE:  " << l4 << endl;
//	l4.calculeazaPretDupaDiscount(3);
//	cout << "DUPA:   " << l4<< endl;
//	plp2->calculeazaPretDupaDiscount(3);
//
//	Tablete * ptb1,*ptb2; 
//	ptb1 = &t3;
//	ptb2 = &t4;	
//	cout << "INAINTE:  " << t3 << endl;
//	t3.calculeazaPretDupaDiscount(3);
//	cout << "DUPA:   " << t3 << endl;
//	ptb1->calculeazaPretDupaDiscount(3);
//	cout << "INAINTE:  " << t4<< endl;
//	t4.calculeazaPretDupaDiscount(3);
//	cout << "DUPA:   " << t4 << endl;
//	ptb2->calculeazaPretDupaDiscount(3);
//
//	Telefoane * ptlf1,*ptlf2;
//	ptlf1 = &tl3;
//	ptlf2 = &tl4;
//	cout << "INAINTE:  " << tl3 << endl;
//	tl3.calculeazaPretDupaDiscount(3);
//	cout << "DUPA:   " << tl3 << endl;
//	ptlf1->calculeazaPretDupaDiscount(3);
//	cout << "INAINTE:  " << tl4 << endl;
//	tl3.calculeazaPretDupaDiscount(3);
//	cout << "DUPA:   " << tl4 << endl;
//
//	ptlf2->calculeazaPretDupaDiscount(3);
//;
//
//
//
//
//	cout << "\nFolosind conversia in pointer la obiect de baza: " << endl;
//	pp1 = pel1; pp1->calculeazaPretDupaDiscount(3);
//	
//	pp1 = plp1; pp1->calculeazaPretDupaDiscount(3);
//	pp1 = ptb1;pp1->calculeazaPretDupaDiscount(3);
//	pp1 = ptlf1;pp1->calculeazaPretDupaDiscount(3);
//
//	
//}

//Link github
//https://github.com/rotaru-madalina/Programare-Orientata-Obiect-grupa1047-Proiect


#include<iostream>
#include<string>
#include<vector>
#include<list>
#include "Magazin.h"
#include "Produs.h"
#include "Electrocasnice.h"
#include "Laptop.h"
#include "Tablete.h"
#include "Telefoane.h"
#include "Client.h"

using namespace std;

enum luni_an { Ianuarie, Februarie, Martie, Aprilie, Mai, Iunie, Iulie, August, Septembrie, Octombrie, Noiembrie, Decembrie };

int b;
vector<int> bucati;
list<Produs> listaproduse;
list<Produs> listaprodusetotale;
vector<Produs> cos_cumparaturi;
auto a = cos_cumparaturi.begin();
list<Produs> listacomenzi_magazin;
list<Produs> listacomenzi_client;
list<vector<string>> date_client;
auto d = date_client.begin();
vector<string> informatii;
auto in = informatii.begin();

auto p = listaprodusetotale.begin();
auto pr = listaproduse.begin();


Produs p1, p2;
Produs p3(1000, 499.99, "Aragaz", 50);
Produs p4(1001, 999.99, "Frigider", 50);

Electrocasnice::Produs e1, e2;
Electrocasnice e3(2000, 499.9, "Cuptor cu microunde", 30, 750.5);
Electrocasnice e4(2001, 1099.9, "Combina frigorifica", 20, 900.9);

Tablete::Produs t1, t2;
float d1[] = { 8.3,4.9,0.1 };
Tablete t3(4000, 600.99, "Tableta Lenovo", 40, 8, d1);
float d2[] = { 6.2,3.7,0.1 };
Tablete t4(4001, 1200.99, "Tableta Samsung Galaxy", 60, 6, d2);

Laptop::Produs l1, l2;
Laptop l3(3000, 3299.99, "Laptop HP", 70, "Free DOS", "AMD Ryzen", 8);
Laptop l4(3001, 1999.99, "Laptop Lenovo", 50, "Free DOS", "AMD Ryzen", 4);

Telefoane::Produs tl1, tl2;
Telefoane tl3(5000, 700.01, "Samsung Galaxy A10", 80, "Android 9", 10, "LCD", "Samsung Exynos", 32);
Telefoane tl4(5001, 3199.99, "Apple iPhone 11", 90, "iOS12", 12, "IPS", "Apple A12 Bionic", 64);


list<Electrocasnice> listaelectrocasnice;
auto e = listaelectrocasnice.begin();

list<Laptop> listalaptop;
auto l = listalaptop.begin();

list<Tablete> listatablete;
auto t = listatablete.begin();

list<Telefoane> listatelefoane;
auto tl = listatelefoane.begin();

auto g = listacomenzi_magazin.begin();

void introducere() {
	listaproduse.push_back(p3);
	listaproduse.push_back(p4);

	listaelectrocasnice.push_back(e3);
	listaelectrocasnice.push_back(e4);

	listatablete.push_back(t3);
	listatablete.push_back(t4);

	listalaptop.push_back(l3);
	listalaptop.push_back(l4);

	listatelefoane.push_back(tl3);
	listatelefoane.push_back(tl4);
}
//void afisare()
//{
//	for (auto pr = listaproduse.begin(); pr != listaproduse.end(); pr++)
//		cout << (*pr) << endl;
//}

int verifica_cantitate(Produs produs) {

	for (auto pr = listaproduse.begin(); pr != listaproduse.end(); pr++)
	{

		if ((produs).getcod_pr() == (*pr).getcod_pr())
		{
			return (*pr).cantitate;
		}
	}
	for (auto e = listaelectrocasnice.begin(); e != listaelectrocasnice.end(); e++)
	{
		if ((produs).getcod_pr() == (*e).getcod_pr())
		{
			return (*e).getcantitate();
		}
	}
	for (auto l = listalaptop.begin(); l != listalaptop.end(); l++)
	{
		if ((produs).getcod_pr() == (*l).getcod_pr())
		{
			return (*l).getcantitate();
		}
	}
	for (auto t = listatablete.begin(); t != listatablete.end(); t++)
	{
		if ((produs).getcod_pr() == (*t).getcod_pr())
		{
			return (*t).getcantitate();
		}
	}
	for (auto tl = listatelefoane.begin(); tl != listatelefoane.end(); tl++)
	{
		if ((produs).getcod_pr() == (*tl).getcod_pr())
		{
			return (*tl).getcantitate();
		}
	}
}

int verifica_cod(Produs produs) {

	for (auto pr = listaproduse.begin(); pr != listaproduse.end(); pr++)
	{

		if ((produs).getcod_pr() == (*pr).getcod_pr())
		{
			return (*pr).getcod_pr();
		}
	}
	for (auto e = listaelectrocasnice.begin(); e != listaelectrocasnice.end(); e++)
	{
		if ((produs).getcod_pr() == (*e).getcod_pr())
		{
			return (*e).getcod_pr();
		}
	}
	for (auto l = listalaptop.begin(); l != listalaptop.end(); l++)
	{
		if ((produs).getcod_pr() == (*l).getcod_pr())
		{
			return (*l).getcod_pr();
		}
	}
	for (auto t = listatablete.begin(); t != listatablete.end(); t++)
	{
		if ((produs).getcod_pr() == (*t).getcod_pr())
		{
			return (*t).getcod_pr();
		}
	}
	for (auto tl = listatelefoane.begin(); tl != listatelefoane.end(); tl++)
	{
		if ((produs).getcod_pr() == (*tl).getcod_pr())
		{
			return (*tl).getcod_pr();
		}
	}
}

template<int> class Vector {
private:
	int nrprod;
	int* produse;
public:
	Vector() {
		this->nrprod = nullptr;
		this->produse = 0;
	}

	Vector(int nrprod, int* produse) {
		this->nrprod = produse;

		this->produse = new int[nrprod];
		for (int i = 0; i < nrprod; i++) {
			this->produse[i] = produse[i];
		}
	}

	Vector(const Vector& v) {
		this->nrprod = v.nrprod;

		this->nrprod = new int[v.nrprod];
		for (int i = 0; i < v.nrprod; i++) {
			this->produse[i] = v.produse[i];
		}
	}

	~Vector() {
		if (produse != nullptr) {
			delete[] produse;
		}
	}

	void remove(int position) {
		if (position >= 0 && position < nrprod) {
			int* aux = new int[nrprod - 1];
			int k = 0;
			for (int i = 0; i < nrprod; i++) {
				if (i != position) {
					aux[k++] = this->produse[i];
				}
			}

			delete[] this->produse;
			this->produse = aux;
		}
		else {
			throw new exception("bad position!");
		}
	}
};


int main()
{
	int user, comenzi_client, comenzi_magazin, nr_clienti = 1, nr, nrprod = 1;
	bool sfarsit_completare = 0;
	string luna_n;
	int adresare = 0, zi = 0, an = 0, luna = 0; //scara = 0, numar = 0, bloc = 0, etaj = 0, apart = 0;
	string numar, scara, bloc, etaj, apart;
	string judet, loc, strada, intrebare, pers, answer;

	introducere();

	listaprodusetotale.insert(listaprodusetotale.end(), listaproduse.begin(), listaproduse.end());

	listaprodusetotale.insert(listaprodusetotale.end(), listaelectrocasnice.begin(), listaelectrocasnice.end());

	listaprodusetotale.insert(listaprodusetotale.end(), listalaptop.begin(), listalaptop.end());

	listaprodusetotale.insert(listaprodusetotale.end(), listatablete.begin(), listatablete.end());

	listaprodusetotale.insert(listaprodusetotale.end(), listatelefoane.begin(), listatelefoane.end());

	vector<Client> listaclienti;
	Client c1(100, "Rotaru Madalina", 1, "10-01-2021", "0728399872", "r.mada@yahoo.com", "Targu Jiu");
	Client c2(101, "Tilvan Madalina", 3, "13-12-2020", "0744656913", "tms10@yahoo.com", "Targoviste");
	Client c3(102, "Sorina Bocu", 1, "08-01-2021", "0768374930", "s_bocu@gmail.com", "Constanta");
	listaclienti.push_back(c1);
	listaclienti.push_back(c2);
	auto i = listaclienti.begin();

	Magazin m1(1, "Emag", "Bucuresti", 100);

	cout << "Bun venit la " << m1.den_mag << "!\n Alegeti tipul de utilizator: \n[1]Client \n[2]Magazin" << endl;
	cin >> user;
	switch (user) {
	case 1:
	{
		cout << "Introdu codul client: ";
		int cod = 1;

		while (true) {
			cin >> cod;
			for (; i != listaclienti.end(); i++) {
				if (cod == (*i).getcod_cl())
				{
					cout << "Bun venit " << (*i).getNume() << "!\nCe ai dori sa faci azi?" << endl;
					break;
				}
			}
			if (i == listaclienti.end())
			{
				cout << "Introduceti un cod client valid!" << endl;
				cout << "Introdu codul client: ";
				i = listaclienti.begin();
			}
			else
				break;

		}

		while (true) {
			cout << "[1]Vizualizeaza produse" << endl;
			cout << "[2]Pune produse in cos" << endl;
			cout << "[3]Sterge produse din cos" << endl;
			cout << "[4]Completeaza datele personale" << endl;
			cout << "[5]Trimite comanda" << endl;
			cout << "[6]Vizualizeaza starea comenzii" << endl;

			cin >> comenzi_client;
			if (comenzi_client == 1) {

				cout << "[1]Vizualizeaza produse" << endl << endl;
				int ras;
				cout << "CATEGORII\n" << "[1]Produse" << "\n[2]Electrocasnice" << "\n[3]Laptop" << "\n[4]Tablete" << "\n[5]Telefoane" << endl;
				cin >> ras;

				switch (ras) {
				case 1: {
					cout << "\tProduse" << endl;
					auto p = listaproduse.begin();
					for (; p != listaproduse.end(); p++) {
						cout << (*p) << endl << endl;
					}
					break;
				}
				case 2: {
					cout << "\n\tElectrocasnice" << endl;
					auto e = listaelectrocasnice.begin();
					for (; e != listaelectrocasnice.end(); e++) {
						cout << (*e) << endl;
					}
					break;
				}

				case 3: {
					cout << "\n\tLaptop" << endl;
					auto l = listalaptop.begin();
					for (; l != listalaptop.end(); l++) {
						cout << (*l) << endl;
					}
					break;
				}
				case 4: {
					cout << "\n\tTablete" << endl;
					auto t = listatablete.begin();
					for (; t != listatablete.end(); t++) {
						cout << (*t) << endl << endl;
					}
					break;
				}
				case 5: {
					cout << "\n\tTelefoane" << endl;
					auto tl = listatelefoane.begin();
					for (; tl != listatelefoane.end(); tl++) {
						cout << (*tl) << endl;
					}
					break;
				}
				}
			}

			else if (comenzi_client == 2)
			{
				cout << "[2]Pune produse in cos" << endl;//alege codul produsului pe care vrei sa il cumperi, sa adaug produsul in cos

				p = listaprodusetotale.begin();
				int cod;

				cout << "Cate produse doriti sa adaugati in cos?" << endl;

				cin >> nrprod;
				for (int a = 0; a < nrprod; a++) {
					cout << "Adauga in cos produsul: ";
					cin >> cod;


					for (; p != listaprodusetotale.end(); p++) {
						if (cod == (*p).getcod_pr())   //and verifica_cantitate()==1;
						{
							nr = 0;
							cout << "Numar bucati: ";
							cin >> nr;

							if (verifica_cantitate(*p) < nr)
							{
								cout << "Stoc insuficient!" << endl;
								break;
							}

							bucati.push_back(nr);

							cos_cumparaturi.push_back(*p);

							cout << "Produsul a fost introdus cu succes in cosul de cumparaturi!" << endl;

							break;
						}
					}
				}
				if (p == listaprodusetotale.end())
				{
					cout << "A intervenit o problema." << endl;
				}

			}

			else if (comenzi_client == 3)
			{
				//code
				cout << "[3]Sterge produse din cos" << endl;//alegere codul produsului pe care vrei sa il cumperi, sa sterg produsul in cos

				auto p = cos_cumparaturi.begin();
				int cod;
				int b = 0;

				cout << "Cate produse doriti sa scoateti din cos?" << endl;

				int nrprod;
				cin >> nrprod;
				if (nrprod <= cos_cumparaturi.size()) {
					for (int a = 0; a < nrprod; a++) {
						cout << "Scoate din cos produsul: ";
						cin >> cod;
						for (; p != cos_cumparaturi.end(); p++) {
							b++;
							if (cod == (*p).getcod_pr())
							{
								bucati.erase(bucati.begin() + b - 1);

								cos_cumparaturi.erase(cos_cumparaturi.begin() + b - 1);

								cout << "Produsul a fost sters cu succes din cosul de cumparaturi!" << endl;
								break;
							}
						}
					}
				}

				else
				{
					throw new exception("Nu aveti atatea produse in cos!");
				}


			}

			else if (comenzi_client == 4)
			{
				cout << "[4]Completeaza datele personale" << endl;


				while (true)
				{
					if (sfarsit_completare == 1)
					{
						cout << "Doriti sa vizualizati datele personale sau sa le editati pe cele deja introduse?" << endl;
						cin >> answer;
						if (answer == "vizualizare")
						{
							cout << "\nDATE PERSONALE" << endl;

							if (adresare == 1)
								pers = "Dl.";
							else if (adresare == 2)
								pers = "Dna.";

							cout << "Nume Prenume\t" << pers << " " << (*i).getNume() << endl;

							cout << "Telefon mobil\t" << (*i).getTel() << endl;

							cout << "Data nasterii\t" << zi;

							switch (luna)
							{
							case 1:
								luna_n = "Ianuarie";
								break;
							case 2:
								luna_n = "Februarie";
								break;
							case 3:
								luna_n = "Martie";
								break;
							case 4:
								luna_n = "Aprilie";
								break;
							case 5:
								luna_n = "Mai";
								break;
							case 6:
								luna_n = "Iunie";
								break;
							case 7:
								luna_n = "Iulie";
								break;
							case 8:
								luna_n = "August";
								break;
							case 9:
								luna_n = "Septembrie";
								break;
							case 10:
								luna_n = "Octombrie";
								break;
							case 11:
								luna_n = "Noiembrie";
								break;
							case 12:
								luna_n = "Decembrie";
								break;
							}

							cout << " " << luna_n << ", " << an << endl;

							cout << "Adresa\n" << "\tJudet: " << judet << "\n\tLocalitate: " << (*i).getAdresa() << "\n\tStrada: " << strada;
							if (intrebare == "casa")
							{
								cout << "\n\tNumar: " << numar << endl;
							}
							else if (intrebare == "bloc")
							{
								cout << "\n\tBloc: " << bloc;

								cout << "\n\tScara: " << scara;

								cout << "\n\tEtaj: " << etaj;

								cout << "\n\tApartament: " << apart << endl;
							}
							break;
						}

						else if ((sfarsit_completare == 0) or (answer == "editare"))
						{
							while (true)
							{
								cout << "Forma de adresare\t" << "[1]Dl. " << "[2]Dna. " << "[3]Nespecificat" << endl;
								cin >> adresare;
								if (adresare == 1 or adresare == 2 or adresare == 3)
									break;
								else
									cout << "Introduceti numarul 1, 2 sau 3!" << endl;
							}

							cout << "Nume Prenume\t" << (*i).getNume() << endl;

							cout << "Telefon mobil\t" << (*i).getTel() << endl;

							cout << "Data nasterii\t";

							while (true)
							{
								cout << "\n\tzi: ";
								cin >> zi;
								if (zi < 0 or zi > 31)
								{
									cout << "Introduceti un numar intre 1 si 31!" << endl;
								}
								else
									break;
							}

							while (true)
							{
								cout << "\tluna: ";
								cout << "\t[1]Ianuarie   " << "[2]Februarie   " << "[3]Martie   " << "[4]Aprilie   " << "\n\t\t[5]Mai   " << "[6]Iunie   " << "[7]Iulie   "
									<< "[8]August   " << "\n\t\t[9]Septembrie   " << "[10]Octombrie   " << "[11]Noiembrie   " << "[12]Decembrie   " << endl;
								cin >> luna;

								if (luna < 1 or luna > 12)
									cout << "Introdu un numar din cele date!" << endl;
								else
									break;
							}

							while (true)
							{
								cout << "\n\tan: ";
								cin >> an;
								if (an < 1920 or an >2021)
									cout << "Anul introdus este invalid!" << endl;
								else
									break;
							}

							cout << "Adresa" << endl;
							cout << "\tJudet: ";
							cin >> judet;

							cout << "\tLocalitate: " << (*i).getAdresa() << endl;

							cout << "\tStrada: ";
							cin >> strada;

							cout << "Locuiti la bloc sau la casa?" << endl;
							cin >> intrebare;

							if (intrebare == "casa")
							{
								cout << "\tNumar: ";
								cin >> numar;
							}
							else if (intrebare == "bloc")
							{
								cout << "\tBloc: ";
								cin >> bloc;

								cout << "\tScara: ";
								cin >> scara;

								cout << "\tEtaj: ";
								cin >> etaj;

								cout << "\tApartament: ";
								cin >> apart;
							}

							sfarsit_completare = 1;
							break;
						}
						else
							cout << "Raspundeti cu <vizualizare> sau <editare>" << endl;
					}
					else
					{
						while (true)
						{
							cout << "Forma de adresare\t" << "[1]Dl. " << "[2]Dna. " << "[3]Nespecificat" << endl;
							cin >> adresare;
							if (adresare == 1 or adresare == 2 or adresare == 3)
								break;
							else
								cout << "Introduceti numarul 1, 2 sau 3!" << endl;
						}

						cout << "Nume Prenume\t" << (*i).getNume() << endl;

						cout << "Telefon mobil\t" << (*i).getTel() << endl;

						cout << "Data nasterii\t";

						while (true)
						{
							cout << "\n\tzi: ";
							cin >> zi;
							if (zi < 0 or zi > 31)
							{
								cout << "Introduceti un numar intre 1 si 31!" << endl;
							}
							else
								break;
						}

						while (true)
						{
							cout << "\tluna: ";
							cout << "\t[1]Ianuarie   " << "[2]Februarie   " << "[3]Martie   " << "[4]Aprilie   " << "\n\t\t[5]Mai   " << "[6]Iunie   " << "[7]Iulie   "
								<< "[8]August   " << "\n\t\t[9]Septembrie   " << "[10]Octombrie   " << "[11]Noiembrie   " << "[12]Decembrie   " << endl;
							cin >> luna;

							if (luna < 1 or luna > 12)
								cout << "Introdu un numar din cele date!" << endl;
							else
								break;
						}

						while (true)
						{
							cout << "\n\tan: ";
							cin >> an;
							if (an < 1920 or an >2021)
								cout << "Anul introdus este invalid!" << endl;
							else
								break;
						}

						cout << "Adresa" << endl;
						cout << "\tJudet: ";
						cin >> judet;

						cout << "\tLocalitate: " << (*i).getAdresa() << endl;

						cout << "\tStrada: ";
						cin >> strada;

						while (true)
						{
							cout << "Locuiti la bloc sau la casa?" << endl;
							cin >> intrebare;

							if (intrebare == "casa")
							{
								cout << "\tNumar: ";
								cin >> numar;

								break;
							}
							else if (intrebare == "bloc")
							{
								cout << "\tBloc: ";
								cin >> bloc;

								cout << "\tScara: ";
								cin >> scara;

								cout << "\tEtaj: ";
								cin >> etaj;

								cout << "\tApartament: ";
								cin >> apart;

								break;
							}
							else
								cout << "Raspundeti cu <bloc> sau <casa>" << endl;
						}

						sfarsit_completare = 1;
						break;
					}
				}
			}

			else if (comenzi_client == 5)
			{

				cout << "[5]Trimite comanda" << endl;//vrei sa trimiti comanda da si nu; daca da comanda adaugata la lista comenzi magazin

				while (true)
				{
					cout << "Trimiteti comanda?" << endl;
					cin >> answer;
					if (answer == "da")
					{
						//adaugi comanda la lista_Comenzi_magazin atasata magazin folosind cos_cumparaturi
						//golesti cosul de cumparaturi - comanda clear
						//scazi din cantitatea produselor ce ai comandat
						a = cos_cumparaturi.begin();
						b = 0;

						if (cos_cumparaturi.size() == 0)
						{
							cout << "Nu aveti produse in cos!" << endl;
							break;
						}
						else if (sfarsit_completare == 0)
						{
							cout << "Completati datele personale inainte de a finaliza comanda!" << endl;
							break;
						}
						else
						{
							for (; a < cos_cumparaturi.end(); a++)
							{
								(*a).cantitate = bucati.at(b);
								(*a).pret *= (*a).cantitate;
								listacomenzi_magazin.push_back(*a);
								b++;
							}

							b = 0;

							for (auto g = listacomenzi_magazin.begin(); g != listacomenzi_magazin.end(); g++)
							{
								for (auto pr = listaproduse.begin(); pr != listaproduse.end(); pr++)
								{
									if ((*g).getcod_pr() == verifica_cod(*pr))
									{
										(*pr).cantitate -= bucati.at(b);
										b++;
										break;
									}
								}
								for (auto e = listaelectrocasnice.begin(); e != listaelectrocasnice.end(); e++)
								{
									if ((*g).getcod_pr() == verifica_cod(*e))
									{
										(*e).cantitate -= bucati.at(b);
										b++;
										break;
									}
								}
								for (auto l = listalaptop.begin(); l != listalaptop.end(); l++)
								{
									if ((*g).getcod_pr() == verifica_cod(*l))
									{
										(*l).cantitate -= bucati.at(b);
										b++;
										break;
									}
								}
								for (auto t = listatablete.begin(); t != listatablete.end(); t++)
								{
									if ((*g).getcod_pr() == verifica_cod(*t))
									{
										(*t).cantitate -= bucati.at(b);
										b++;
										break;
									}
								}
								for (auto tl = listatelefoane.begin(); tl != listatelefoane.end(); tl++)
								{
									if ((*g).getcod_pr() == verifica_cod(*tl))
									{
										(*tl).cantitate -= bucati.at(b);
										b++;
										break;
									}
								}
							}

							cos_cumparaturi.clear();

							if (intrebare == "casa")
							{
								date_client.push_back({ (*i).getNume(), (*i).getTel() , judet, (*i).getAdresa(), strada, numar });
							}
							else if (intrebare == "bloc")
							{
								date_client.push_back({ (*i).getNume(), (*i).getTel(), judet, (*i).getAdresa(), strada, bloc, scara, etaj, apart });
							}

							/*cout << "Afisare date client" << endl;
							for (auto& d : date_client)
							{
								for (auto& in : d)
								{
									cout << in << " ";
								}
								cout << endl;
							}*/

							cout << "Multumim pentru comanda facuta! Puteti verifica starea comenzi in sectiunea 6." << endl;
							break;
						}

					}
					else if (answer == "nu")
					{
						break;
					}
					else
						cout << "Raspundeti cu <da> sau <nu>" << endl;
				}
			}

			else if (comenzi_client == 6)
			{
				//code
				cout << "[6]Vizualizeaza starea comenzi" << endl; //se modifica comanda preluata de curier
				//listacomenzi_magazin;

				fstream f;
				f.open("Comenzi_client.txt", ios::out);


				if (!f)
				{
					cout << "Error!" << endl;
				}

				cout << "Fisier creat!" << endl;


				int h = 1;
				float sum = 0;
				b = 0;
				f << "Comanda nr. " << h << "\nPlasata pe: " << (*i).getData_Com() << " | Total: ";
				for (auto g = listacomenzi_magazin.begin(); g != listacomenzi_magazin.end(); g++)
				{
					sum += (*g).getpret();
					b++;
				}

				f << sum << " lei" << endl << endl;

				f << "Date facturare\n" << "Pentru:\n" << (*i).getNume() << ", " << (*i).getTel() << endl;
				f << "Adresa:\n" << "Strada " << strada << " Nr. " << numar << ", " << (*i).getAdresa() << ", " << judet;

				f.close();

				/*a = cos_cumparaturi.begin();
				int b = 0;*/

				/*for (auto g = 0; g < bucati.size(); g++) {
					cout << bucati[g] << endl;
				}*/

				/*for (; a < cos_cumparaturi.end(); a++)
				{
					(*a).cantitate = bucati.at(b);
					cout << (*a) << endl << endl;
					b++;
				}*/
			}
			else
				cout << "Alegeti un numar corect!" << endl;

			cout << "Doriti sa continuati?\n";
			string raspuns;
			cin >> raspuns;
			if (raspuns != "da" or raspuns == "nu")
				break;

		}
		break;
	}
	case 2:
	{
		cout << "Bun venit " << m1.den_mag << "!\nCe ai dori sa faci azi?" << endl;
		cout << "[1]Adauga produs nou" << endl;
		cout << "[2]Editeaza produse" << endl;
		cout << "[3]Sterge produse" << endl;
		cout << "[4]Prelucreaza comenzi" << endl;
		cout << "[5]Vizualizeaza starea comenzilor" << endl; 
		cin >> comenzi_magazin;
		if (comenzi_magazin == 1)
		{
			//code
			cout << "[1]Adauga produse noi" << endl;//lista cu denumire etc
			cout << "In ce categorie doriti sa adaugati produse noi?\n" << "[1]Produse\n" << "[2]Electrocasnice\n" << "[3]Laptop\n"
				<< "[4]Tablete\n" << "[5]Telefoane" << endl;

			//Produs produs;
			//Produs produs1, produs2, produs3, produs4, produs5;
			list<Produs>::iterator j;
			char* den = 0, so_lap, proces, so_t;
			int cod, cant, mem, inches, categ, num;
			float price, k, dim;

			cin >> categ;
			switch (categ)
			{
			case 1:
			{
				cout << "Cate produse adaugati?\n";
				cin >> num;
				for (int x = 0; x < num; x++)
				{
					Produs produs;
					cout << "Cod produs: ";
					cin >> cod;
					produs.setcod_pr(cod);
					/*cout << "Denumire produs: ";
					cin >> den;
					produs.setden_pr(den);*/
					cout << "Pret: ";
					cin >> price;
					produs.setpret(price);
					cout << "Cantitate: ";
					cin >> cant;
					produs.setcantitate(cant);
					
					listaproduse.push_back(produs);
				}
				break;
			}
			case 2:
			{
				cout << "Cate produse adaugati?\n";
				cin >> num;
				for (int x = 0; x < num; x++)
				{
					Electrocasnice produs2;
					cout << "Cod produs: ";
					cin >> cod;
					produs2.setcod_pr(cod);
					cout << "Denumire produs: ";
					cin >> den;
					produs2.setden_pr(den);
					cout << "Pret: ";
					cin >> price;
					produs2.setpret(price);
					cout << "Cantitate: ";
					cin >> cant;
					produs2.setcantitate(cant);
					cout << "Capacitate putere: ";
					cin >> k;
					produs2.setkW(k);
					listaelectrocasnice.push_back(produs2);
				}
				break;
			}
			case 3:
			{
				cout << "Cate produse adaugati?\n";
				cin >> num;
				for (int x = 0; x < num; x++)
				{
					Laptop produs3;
					cout << "Cod produs: ";
					cin >> cod;
					produs3.setcod_pr(cod);
					cout << "Denumire produs: ";
					cin >> den;
					produs3.setden_pr(den);
					cout << "Pret: ";
					cin >> price;
					produs3.setpret(price);
					cout << "Cantitate: ";
					cin >> cant;
					produs3.setcantitate(cant);
					cout << "Sistem de operare: ";
					cin >> so_lap;
					produs3.setso_l(&so_lap);
					cout << "Procesor: ";
					cin >> proces;
					produs3.setprocesor(&proces);
					cout << "Capacitatea memoriei: ";
					cin >> mem;
					produs3.setmem_l(mem);
					listalaptop.push_back(produs3);
				}
				break;
			}
			case 4:
			{
				cout << "Cate produse adaugati?\n";
				cin >> num;
				for (int x = 0; x < num; x++)
				{
					Tablete produs4;
					cout << "Cod produs: ";
					cin >> cod;
					produs4.setcod_pr(cod);
					cout << "Denumire produs: ";
					cin >> den;
					produs4.setden_pr(den);
					cout << "Pret: ";
					cin >> price;
					produs4.setpret(price);
					cout << "Cantitate: ";
					cin >> cant;
					produs4.setcantitate(cant);
					cout << "Diagonala display: ";
					cin >> inches;
					cout << "Dimensiuni: ";
					cin >> dim;
					produs4.setDimensiuni(&dim, inches);
					listatablete.push_back(produs4);
				}
				break;
			}
			case 5:
			{
				cout << "Cate produse adaugati?\n";
				cin >> num;
				for (int x = 0; x < num; x++)
				{
					Telefoane produs5;
					cout << "Cod produs: ";
					cin >> cod;
					produs5.setcod_pr(cod);
					cout << "Denumire produs: ";
					cin >> den;
					produs5.setden_pr(den);
					cout << "Pret: ";
					cin >> price;
					produs5.setpret(price);
					cout << "Cantitate: ";
					cin >> cant;
					produs5.setcantitate(cant);
					cout << "Sistem de operare: ";
					cin >> so_t;
					listatelefoane.push_back(produs5);
				}
				break;
			}
			}
		}

		else if (comenzi_magazin == 2)
		{
			//code
			int cod;
			cout << "[2]Editeaza produse" << endl;//scrie codul produsului pe care vrei sa il editezi
			cout << "Ce produs doresti sa editezi? Introdu cod produs: ";
			cin >> cod;

			for (auto p = listaprodusetotale.begin(); p != listaprodusetotale.end(); p++)\
			{
				if ((*p).getcod_pr() == cod)
				{
					cout << "Cod produs: ";
					cin >> cod;
				}

			}
		}

		else if (comenzi_magazin == 3)
		{
			//code
			cout << "[3]Sterge produse" << endl;//la fel ca la client
			/*auto p = listaprodusetotale.begin();
			int cod;
			int b = 0;

			cout << "Cate produse doriti sa stergeti?" << endl;

			int nrprod;
			cin >> nrprod;
			if (nrprod <= listaprodusetotale.size()) {
				for (int a = 0; a < nrprod; a++) {
					cout << "Sterge produsul: ";
					cin >> cod;
					for (auto p = listaprodusetotale.begin(); p != listaprodusetotale.end(); p++) {
						b++;
						if (cod == (*p).getcod_pr())
						{
							listaprodusetotale.remove(*p);

							cout << "Produsul a fost sters cu succes!" << endl;
							break;
						}
					}
				}
			}

			else
			{
				throw new exception("Eroare!");
			}*/

		}

		else if (comenzi_magazin == 4)
		{
			//code
			cout << "[4]Prelucreaza comenzi" << endl;//luata de la clienti de mai sus, pusa intr-un vector
			string info;
			ifstream f;
			f.open("Comenzi_client.txt", ios::out);
			while (getline(f, info))
				cout << info << endl;

			f.close();

			/*for (auto j = listacomenzi_magazin.begin(); j != listacomenzi_magazin.end(); j++)
			{
				cout << *j << endl;
			}*/
		}

		else if (comenzi_magazin == 5)
		{
			//code
			string info;
			cout << "[5]Vizualizeaza starea comenzilor" << endl;//lista comenzi cu stari
			ifstream f;
			f.open("Comenzi_client.txt", ios::out);
			while (getline(f, info))
				cout << info << endl;

			f.close();
		}

		break;
	}
	}
}

#pragma once
#include <iostream>

using namespace std;
class Konto
{
	int nr_rachunku;
	string imie;
	string nazwisko;
	float stan_konta;
public:
	Konto(string, string, int);
	Konto(int);
	Konto(Konto&);
	~Konto();
	void set_stan_konta(float);
	float get_stan_konta();
	void get_dane();
	void zmien_imie_i_nazwisko(string, string);
	float oprocentowanie(float);
	friend ostream& operator << (ostream&, Konto&);
};

#include "Konto.h"
#include <iostream>

using namespace std;

Konto::Konto(string im,string nazw,int nr) {
	nr_rachunku = nr;
	imie = im;
	nazwisko = nazw;
	stan_konta = 0;
};
Konto::Konto(int nr) {
	nr_rachunku = nr;
	imie = "";
	nazwisko = "";
	stan_konta = 0;
};
Konto::Konto(Konto& kon) {
	nr_rachunku = kon.nr_rachunku;
	imie = kon.imie;
	nazwisko = kon.nazwisko;
	stan_konta = kon.stan_konta;
};
Konto::~Konto() {
	cout << "\nDestruktor";
};
void Konto::set_stan_konta(float stan) {
	stan_konta = stan;
};
float Konto::get_stan_konta() {
	return stan_konta;
};
void Konto::get_dane() {
	cout << "\nImie: " << imie;
	cout << "\nNazwisko: " << nazwisko;
	cout << "\nNr rachunku: " << nr_rachunku;
	cout << "\nStan konta: " << stan_konta;
};
void Konto::zmien_imie_i_nazwisko(string im, string nazw) {
	imie = im;
	nazwisko = nazw;
};
float Konto::oprocentowanie(float i) {
	stan_konta = stan_konta * i;
	return stan_konta;
};
ostream& operator << ( ostream& os, Konto& kon) {
	os << "\nNr rachunku: " << kon.nr_rachunku << "\n";
	os << "\nImie: " << kon.imie << "\n";
	os << "\nNazwisko: " << kon.nazwisko << "\n";
	os << "\nStan konta: " << kon.stan_konta << "\n";
	return os;
};
void operator ++ (Konto kon) {
	float i =kon.get_stan_konta();
	kon.oprocentowanie(0.01);
};
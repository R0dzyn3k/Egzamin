#include <iostream>
#include "Konto.h"

void operator ++ (Konto kon);


int main()
{
    Konto konto1("Adam", "Duda", 10001);
    Konto konto2(10001);
    Konto konto3 = konto1;

    konto2.set_stan_konta(10000);
    std::cout << "Stan Twojego konta wynosi: " << konto2.get_stan_konta();
    konto2.zmien_imie_i_nazwisko("Jarek", "Nowak");
    konto2.get_dane();
    konto2.oprocentowanie(1.23);
    konto2.get_dane();
    cout << konto2;
    ++(konto2);
    cout << konto2;



}
// KlasyIObiekty c++.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

class Samochod {
public:
    std::string marka;
    std::string model;
    int predkosc;
    static int liczbaSamochodow; //Pole statycznie NIE USTAWIAJ TU WARTOSCI

    Samochod(std::string marka, std::string model, int predkosc) {
        this->marka = marka;
        this->model = model;
        this->predkosc = predkosc;
    }
}; //<-- Po definicji musi wystapic srednik
int Samochod::liczbaSamochodow = 0; //nadawanie wartosci w polu statycznym

class Konto {
private:
    double saldo;
public:
    Konto(double saldo = 0) {
        this->saldo = saldo;
    }

    void ustawSaldo(double saldo) {
        this->saldo = saldo;
    }
    double pobierzSaldo() {
        return saldo;
    }
   
};

class Test {
public:
    ~Test() {
        std::cout << "Obiekt został zniszczony\n";

    }
    Test() {
        std::cout << "Obiekt stworzony\n";

    }
};

//Zadanie
class KursOnline {
private:
    std::string nazwaKursu;
    double cena;
protected:
    int liczbaLekcji;
public:
    static int liczbaKursow;

    KursOnline(std::string nazwa, double cena, int liczbaLekcji) {
        this->nazwaKursu = nazwa;
        this->cena = cena;
        this->liczbaLekcji = liczbaLekcji;
        liczbaKursow++;
    }

    void wyswietlInformacje() {
        std::cout << nazwaKursu << ", liczba lekcji: " << liczbaLekcji << ", cena: " << cena << " zł\n";
    }

    static int liczbaUtworzonychKursow() {
        return liczbaKursow;
    }
};
int KursOnline::liczbaKursow = 0;

int main()
{
    KursOnline k("Kurs1 test", 199.99, 40);
    KursOnline k1("Kurs2 test", 29.99, 3);
    KursOnline k2("Kurs3 test", 499.99, 120);
    k.wyswietlInformacje();
    k1.wyswietlInformacje();
    k1.wyswietlInformacje();

    std::cout << "Liczba kursów: " << KursOnline::liczbaKursow << "\n";
}

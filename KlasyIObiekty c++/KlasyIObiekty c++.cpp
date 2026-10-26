// KlasyIObiekty c++.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

class Samochod {
public:
    std::string marka;
    std::string model;
    int predkosc;

    Samochod(std::string marka, std::string model, int predkosc) {
        this->marka = marka;
        this->model = model;
        this->predkosc = predkosc;
    }
}; //<-- Po definicji musi wystapic srednik

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

int main()
{
    Samochod auto1("VW", "Passat", 250); //<-- Argument konstruktora do nowego obiektu klasy w nawiasie od razu po definicji
    std::cout << auto1.marka;
    auto1.marka = "Opel";
    auto1.model = "Astra";
    auto1.predkosc = 200;

    Konto k;
    k.ustawSaldo(500);

    std::cout << k.pobierzSaldo();

    Test t;
}

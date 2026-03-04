#include "Prostokat.hpp"
#include <iostream>
using namespace std;

Prostokat::Prostokat() {
	this->a = 0;
	this->b = 0;
	cout << "**Konstruktor bezparametrowy Prostokat(" << a << "," << b << ")" << endl;
	licznik++;
	cout << "1 figura z " << this->licznik << endl;
}

Prostokat::Prostokat(double a, double b): a(a), b(b)
{
	cout << "**Konstruktor Prostokat(" << a << "," << b << ")" << endl;
	licznik++;
	cout << "1 figura z " << this->licznik << endl;
}

double Prostokat::GetA() const {
	return a;
}
double Prostokat::GetB() const {
	return b;
}
void Prostokat::SetA(double a) {
	this->a = a;
}
void Prostokat::SetB(double b) {
	this->b = b;
}
double Prostokat::Obwod() const {
	//TODO 1
	double obw = 2 * (this->a + this->b);

	return obw;
}
double Prostokat::Pole() const {
	//TODO 2
	double pole = this->a * this->b;

	return pole;
}
void Prostokat::Wypisz(std::ostream& out) const {
	//TODO 3
	out << "Prostokat" << endl;
	out << "a = " << this->a << endl;
	out << "b = " << this->b << endl;

	return;
}
Prostokat::~Prostokat() {
	//TODO 4
	cout << "**Destruktor Prostokat:" << endl;
	cout << "a = " << this->a << endl;
	cout << "b = " << this->b << endl;
	licznik--;
	cout << "Pozosta³o figur: " << this->licznik << endl;
}
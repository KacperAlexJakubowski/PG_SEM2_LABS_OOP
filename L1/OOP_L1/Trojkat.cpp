#include "Trojkat.hpp"
#include <cmath>
using namespace std;

Trojkat::Trojkat() {
	this->a = 0;
	this->b = 0;
	this->c = 0;
	cout << "**Konstruktor bezparametrowy Trojkat(" << a << "," << b << "," << c << ")" << endl;
}

Trojkat::Trojkat(double a, double b, double c) : a(a), b(b), c(c) {
	cout << "**Konstruktor Trojkat(" << a << "," << b << "," << c << ")" << endl;
}

double Trojkat::GetA() const {
	return this->a;
}

double Trojkat::GetB() const {
	return this->b;
}

double Trojkat::GetC() const {
	return this->c;
}

void Trojkat::SetA(double a) {
	this->a = a;
}

void Trojkat::SetB(double b) {
	this->b = b;
}

void Trojkat::SetC(double c) {
	this->c = c;
}

double Trojkat::Obwod() const {
	double obw = this->a + this->b + this->c;
	
	return obw;
}

double Trojkat::Pole() const {
	double p = this->Obwod() / 2;
	double pole = sqrt(p * (p - this->a) * (p - this->b) * (p - this->c));
	
	return pole;
}

void Trojkat::Wypisz(std::ostream& out) const {
	out << "Trojkat" << endl;
	out << "a = " << this->a << endl;
	out << "b = " << this->b << endl;
	out << "c = " << this->c << endl;

	return;
}

Trojkat::~Trojkat() {
	cout << "**Destruktor Trojkat:" << endl;
	cout << "a = " << this->a << endl;
	cout << "b = " << this->b << endl;
	cout << "c = " << this->c << endl;
}


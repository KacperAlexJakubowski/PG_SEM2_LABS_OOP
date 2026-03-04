#include "Kolo.hpp"
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

Kolo::Kolo() {
	this->r = 0;
	cout << "**Konstruktor bezparametrowy Kolo(" << this->r << ")" << endl;
	licznik++;
	cout << "1 figura z " << this->licznik << endl;
}

Kolo::Kolo(double r) : r(r) {
	cout << "**Konstruktor Kolo(" << this->r << ")" << endl;
	licznik++;
	cout << "1 figura z " << this->licznik << endl;
}

double Kolo::GetR() const {
	return this->r;
}

void Kolo::SetR(double r) {
	this->r = r;

	return;
}

double Kolo::Obwod() const {
	double obw = 2 * M_PI * this->r;

	return obw;
}

double Kolo::Pole() const {
	double pole = M_PI * this->r * this->r;

	return pole;
}

void Kolo::Wypisz(std::ostream& out) const {
	out << "Kolo" << endl;
	out << "r = " << this->r << endl;

	return;
}

Kolo::~Kolo() {
	cout << "**Destruktor Kolo:" << endl;
	cout << "r = " << this->r << endl;
	licznik--;
	cout << "Pozosta³o figur: " << this->licznik << endl;
}
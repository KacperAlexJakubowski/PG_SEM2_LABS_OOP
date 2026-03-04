#include "TrojkatRownoboczny.hpp"
#include <iostream>
#include <cmath>
using namespace std;

TrojkatRownoboczny::TrojkatRownoboczny(double a) : a(a)
{
	this->b = this->a;
	this->c = this->a;
	cout << "**Konstruktor TrojkatRownoboczny(" << a << ", " << a << ", " << a << ")" << endl;
	licznik++;
	cout << "1 figura z " << this->licznik << endl;
}

double TrojkatRownoboczny::GetA() const {
	return a;
}

void TrojkatRownoboczny::SetA(double a) {
	this->a = a;
}

double TrojkatRownoboczny::GetB() const {
	return b;
}

double TrojkatRownoboczny::GetC() const {
	return c;
}

double TrojkatRownoboczny::Obwod() const {
	double obw = 3 * this->a;

	return obw;
}
double TrojkatRownoboczny::Pole() const {
	double pole = ((this->a * this->a) * sqrt(3)) / 4;

	return pole;
}
void TrojkatRownoboczny::Wypisz(std::ostream& out) const {
	out << "TrojkatRownoboczny" << endl;
	out << "a = " << this->a << endl;
	out << "b = " << this->a << endl;
	out << "c = " << this->a << endl;

	return;
}
TrojkatRownoboczny::~TrojkatRownoboczny() {
	cout << "**Destruktor TrojkatRownoboczny:" << endl;
	cout << "a = " << this->a << endl;
	cout << "b = " << this->a << endl;
	cout << "c = " << this->a << endl;
	licznik--;
	cout << "Pozosta³o figur: " << this->licznik << endl;
}

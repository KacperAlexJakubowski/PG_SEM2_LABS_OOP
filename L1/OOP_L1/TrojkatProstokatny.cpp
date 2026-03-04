#include "TrojkatProstokatny.hpp"
#include <cmath>
using namespace std;

TrojkatProstokatny::TrojkatProstokatny(double a, double b) : a(a), b(b) {
	this->c = sqrt((a * a) + (b * b));
	cout << "**Konstruktor TrojkatProstokatny(" << a << "," << b << ", " << c << ")" << endl;
	cout << "1 figura z " << FiguraPlaska::licznik << endl;
}

double TrojkatProstokatny::GetA() const {
	return this->a;
}

double TrojkatProstokatny::GetB() const {
	return this->b;
}

double TrojkatProstokatny::GetC() const {
	return this->c;
}

void TrojkatProstokatny::SetA(double a) {
	this->a = a;
}

void TrojkatProstokatny::SetB(double b) {
	this->b = b;
}

double TrojkatProstokatny::Obwód() const {
	double obw = this->a + this->b + this->c;

	return obw;
}

double TrojkatProstokatny::Pole() const {
	double pole = (this->a * this->b) / 2;

	return pole;
}

void TrojkatProstokatny::Wypisz(std::ostream& out) const {
	out << "TrojkatProstokatny" << endl;
	out << "a = " << this->a << endl;
	out << "b = " << this->b << endl;
	out << "c = " << this->c << endl;


	return;
}

TrojkatProstokatny::~TrojkatProstokatny() {
	cout << "**Destruktor TrojkatProstokatny:" << endl;
	cout << "a = " << this->a << endl;
	cout << "b = " << this->b << endl;
	cout << "c = " << this->c << endl;
	cout << "Pozosta³o figur: " << FiguraPlaska::licznik << endl;
}


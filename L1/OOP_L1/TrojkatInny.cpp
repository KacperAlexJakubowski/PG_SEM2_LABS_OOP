#include "TrojkatInny.hpp"
#include <cmath>
using namespace std;

TrojkatInny::TrojkatInny() {
	this->a = 0;
	this->b = 0;
	this->c = 0;
	cout << "**Konstruktor bezparametrowy TrojkatInny(" << a << "," << b << "," << c << ")" << endl;
	cout << "1 figura z " << FiguraPlaska::licznik << endl;
}

TrojkatInny::TrojkatInny(double a, double b, double c) : a(a), b(b), c(c) {
	cout << "**Konstruktor TrojkatInny(" << a << "," << b << "," << c << ")" << endl;
	cout << "1 figura z " << FiguraPlaska::licznik << endl;
}

double TrojkatInny::GetA() const {
	return this->a;
}

double TrojkatInny::GetB() const {
	return this->b;
}

double TrojkatInny::GetC() const {
	return this->c;
}

void TrojkatInny::SetA(double a) {
	this->a = a;
}

void TrojkatInny::SetB(double b) {
	this->b = b;
}

void TrojkatInny::SetC(double c) {
	this->c = c;
}

double TrojkatInny::Obwód() const {
	double obw = this->a + this->b + this->c;

	return obw;
}

double TrojkatInny::Pole() const {
	double p = this->Obwód() / 2;
	double pole = sqrt(p * (p - this->a) * (p - this->b) * (p - this->c));

	return pole;
}

void TrojkatInny::Wypisz(std::ostream& out) const {
	out << "TrojkatInny" << endl;
	out << "a = " << this->a << endl;
	out << "b = " << this->b << endl;
	out << "c = " << this->c << endl;

	return;
}

TrojkatInny::~TrojkatInny() {
	cout << "**Destruktor TrojkatInny:" << endl;
	cout << "a = " << this->a << endl;
	cout << "b = " << this->b << endl;
	cout << "c = " << this->c << endl;
	cout << "Pozosta³o figur: " << FiguraPlaska::licznik << endl;
}


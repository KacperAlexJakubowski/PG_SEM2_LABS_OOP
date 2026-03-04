#pragma once
#include "Trojkat.hpp"

class TrojkatInny : public Trojkat {
private:
	double a, b, c;
protected:
	void Wypisz(std::ostream& out) const override;
public:
	TrojkatInny();
	TrojkatInny(double a, double b, double c);
	double GetA() const;
	void SetA(double a);
	double GetB() const;
	void SetB(double b);
	double GetC() const;
	void SetC(double c);
	double Obwód() const override;
	double Pole() const override;
	~TrojkatInny() override;
};

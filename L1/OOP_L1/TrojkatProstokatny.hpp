#pragma once
#include "Trojkat.hpp"

class TrojkatProstokatny : public Trojkat {
private:
	double a, b, c;
protected:
	void Wypisz(std::ostream& out) const override;
public:
	TrojkatProstokatny(double a, double b);
	double GetA() const;
	void SetA(double a);
	double GetB() const;
	void SetB(double b);
	double GetC() const;
	double Obwód() const override;
	double Pole() const override;
	~TrojkatProstokatny() override;
};

#pragma once
#include "FiguraPlaska.hpp"

class Trojkat : public FiguraPlaska {
private:
	double a, b, c;
protected:
	void Wypisz(std::ostream& out) const override;
public:
	Trojkat();
	Trojkat(double a, double b, double c);
	double GetA() const;
	void SetA(double a);
	double GetB() const;
	void SetB(double b);
	double GetC() const;
	void SetC(double c);
	double Obwod() const override;
	double Pole() const override;
	~Trojkat() override;
};

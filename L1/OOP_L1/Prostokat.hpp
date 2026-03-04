#pragma once
#include "FiguraPlaska.hpp"

class Prostokat : public FiguraPlaska {
private:
	double a, b;
protected:
	void Wypisz(std::ostream& out) const override;
public:
	Prostokat();
	Prostokat(double a, double b);
	double GetA() const;
	void SetA(double a);
	double GetB() const;
	void SetB(double b);
	double Obwód() const override;
	double Pole() const override;
	~Prostokat() override;
};

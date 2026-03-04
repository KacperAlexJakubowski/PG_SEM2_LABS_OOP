#pragma once
#include "FiguraPlaska.hpp"

class Kolo : public FiguraPlaska
{
private:
	double r;
protected:
	void Wypisz(std::ostream& out) const override;
public:
	Kolo();
	Kolo(double r);
	double GetR() const;
	void SetR(double r);
	double Obwód() const override;
	double Pole() const override;
	~Kolo() override;
};


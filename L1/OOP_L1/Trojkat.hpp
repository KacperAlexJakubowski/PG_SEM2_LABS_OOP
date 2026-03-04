#pragma once
#include "FiguraPlaska.hpp"

class Trojkat : public FiguraPlaska {
protected:
	virtual void Wypisz(std::ostream& out) const override = 0;
public:
	virtual double Obwód() const override = 0;
	virtual double Pole() const override = 0;
	virtual ~Trojkat() override;
};

#pragma once
#include <iostream>

class FiguraPlaska {
protected:
	inline static int licznik = 0;
	virtual void Wypisz(std::ostream& out) const = 0;
	friend std::ostream& operator<<(std::ostream& os, const FiguraPlaska& figura);
public:
	virtual double Pole() const = 0;
	virtual double Obwod() const = 0;
	virtual ~FiguraPlaska();
};

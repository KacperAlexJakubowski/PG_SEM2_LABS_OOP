#pragma once
#include "Trojkat.hpp"

class TrojkatRownoboczny : public Trojkat {
private:
	double a, b, c;
protected:
	void Wypisz(std::ostream& out) const override;
public:
	TrojkatRownoboczny(double a);
	double GetA() const;
	double GetB() const;
	double GetC() const;
	void SetA(double a);
	double Obwód() const override;
	double Pole() const override;
	~TrojkatRownoboczny() override;
};

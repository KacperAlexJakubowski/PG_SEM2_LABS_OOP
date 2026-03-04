#include "FiguraPlaska.hpp"

FiguraPlaska::FiguraPlaska() {
	this->licznik++;
}

std::ostream& operator<<(std::ostream& os, const FiguraPlaska& figura)
{
	figura.Wypisz(os);
	return os;
}


FiguraPlaska::~FiguraPlaska() {
	this->licznik--;
}

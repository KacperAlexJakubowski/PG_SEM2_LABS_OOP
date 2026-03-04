#include "Prostokat.hpp"
#include "TrojkatProstokatny.hpp"
#include "TrojkatRownoboczny.hpp"
#include "TrojkatInny.hpp"
#include "Kolo.hpp"
using namespace std;

#define ROZMIAR 7

int main() {
	// obiekt klasy Prostokat zdefiniowany poprzez zmienn¹ lokaln¹

	Prostokat prostokat1;
	Prostokat* prostokat1_ptr = &prostokat1;

	prostokat1.SetA(4);
	prostokat1.SetB(6);

	cout << "a = " << prostokat1.GetA() << endl;
	cout << "b = " << prostokat1.GetB() << endl;

	// wykorzystanie overrideowanych metod
	cout << "Obwod prostokata 1: " << prostokat1.Obwod() << endl;
	cout << "Pole prostokata 1: " << prostokat1.Pole() << endl;

	// wykorzystanie operatora wypisania
	cout << prostokat1 << endl;

	// -----------------------------------------------------------

	// obiekt klasy Prostokat zdefiniowany poprzez wskaŸnik
	
	// wykorzystanie przeci¹¿enia konstruktora
	Prostokat* prostokat2 = new Prostokat(3, 5);

	cout << "a = " << prostokat2->GetA() << endl;
	cout << "b = " << prostokat2->GetB() << endl;

	// wykorzystanie overrideowanych metod
	cout << "Obwod prostokata 2: " << prostokat2->Obwod() << endl;
	cout << "Pole prostokata 2: " << prostokat2->Pole() << endl;

	// wykorzystanie operatora wypisania
	cout << *prostokat2 << endl;

	// -----------------------------------------------------------

	// obiekt klasy TrojkatProstokatny zdefiniowany poprzez wskaŸnik

	TrojkatProstokatny* trojkat_prost = new TrojkatProstokatny(3, 4);

	cout << "a = " << trojkat_prost->GetA() << endl;
	cout << "b = " << trojkat_prost->GetB() << endl;
	cout << "c = " << trojkat_prost->GetC() << endl;

	// wykorzystanie overrideowanych metod
	cout << "Obwod trojkata prostokatnego: " << trojkat_prost->Obwod() << endl;
	cout << "Pole trojkata prostokatnego: " << trojkat_prost->Pole() << endl;

	// wykorzystanie operatora wypisania
	cout << *trojkat_prost << endl;

	// -----------------------------------------------------------

	// obiekt klasy TrojkatRownoboczny zdefiniowany poprzez wskaŸnik

	TrojkatRownoboczny* trojkat_rowno = new TrojkatRownoboczny(2);

	cout << "a = " << trojkat_rowno->GetA() << endl;
	cout << "b = " << trojkat_rowno->GetB() << endl;
	cout << "c = " << trojkat_rowno->GetC() << endl;

	// wykorzystanie overrideowanych metod
	cout << "Obwod trojkata rownobocznego: " << trojkat_rowno->Obwod() << endl;
	cout << "Pole trojkata rownobocznego: " << trojkat_rowno->Pole() << endl;

	// wykorzystanie operatora wypisania
	cout << *trojkat_rowno << endl;

	// -----------------------------------------------------------

	// obiekt klasy TrojkatInny zdefiniowany poprzez wskaŸnik

	TrojkatInny* trojkat_inny = new TrojkatInny(3, 4, 5);

	cout << "a = " << trojkat_inny->GetA() << endl;
	cout << "b = " << trojkat_inny->GetB() << endl;
	cout << "c = " << trojkat_inny->GetC() << endl;

	// wykorzystanie overrideowanych metod
	cout << "Obwod trojkata innego: " << trojkat_inny->Obwod() << endl;
	cout << "Pole trojkata innego: " << trojkat_inny->Pole() << endl;

	// wykorzystanie operatora wypisania
	cout << *trojkat_inny << endl;

	// -----------------------------------------------------------

	// obiekt klasy Kolo zdefiniowany poprzez zmienn¹ lokaln¹

	Kolo kolo1;
	Kolo* kolo1_ptr = &kolo1;

	kolo1.SetR(7);

	cout << "r = " << kolo1.GetR() << endl;

	// wykorzystanie overrideowanych metod
	cout << "Obwod kola 1: " << kolo1.Obwod() << endl;
	cout << "Pole kola 1: " << kolo1.Pole() << endl;

	// wykorzystanie operatora wypisania
	cout << kolo1 << endl;

	// -----------------------------------------------------------

	// obiekt klasy Kolo zdefiniowany poprzez wskaŸnik

	// wykorzystanie przeci¹¿enia konstruktora
	Kolo* kolo2 = new Kolo(8);

	cout << "r = " << kolo2->GetR() << endl;

	// wykorzystanie overrideowanych metod
	cout << "Obwod kola 2: " << kolo2->Obwod() << endl;
	cout << "Pole kola 2: " << kolo2->Pole() << endl;

	// wykorzystanie operatora wypisania
	cout << *kolo2 << endl;

	// -----------------------------------------------------------

	// Dowód na dzia³aj¹cy polimofizm i overridowanie metod

	FiguraPlaska* figury[ROZMIAR];

	figury[0] = prostokat1_ptr;
	figury[1] = prostokat2;
	figury[2] = trojkat_prost;
	figury[3] = trojkat_rowno;
	figury[4] = trojkat_inny;
	figury[5] = kolo1_ptr;
	figury[6] = kolo2;

	for (int i = 0; i < ROZMIAR; i++) {
		cout << "Obwod figury " << i+1 << ": " << figury[i]->Obwod() << endl;
	}
	cout << endl;

	// Destrukcja obiektów
	
	delete prostokat2;
	delete trojkat_prost;
	delete trojkat_rowno;
	delete trojkat_inny;
	delete kolo2;

	return 0;
}

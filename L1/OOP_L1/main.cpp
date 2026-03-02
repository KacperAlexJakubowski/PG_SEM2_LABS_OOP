#include "Prostokat.hpp"
#include "Trojkat.hpp"
#include "Kolo.hpp"
using namespace std;

#define ROZMIAR 6

int main() {
	// obiekt klasy Prostokat zdefiniowany poprzez zmienn¹ lokaln¹

	Prostokat prostokat1;
	Prostokat* prostokat1_ptr = &prostokat1;

	prostokat1.SetA(4);
	prostokat1.SetB(6);

	prostokat1.GetA();
	prostokat1.GetB();

	// wykorzystanie overrideowanych metod
	cout << "Obwod prostokata 1: " << prostokat1.Obwod() << endl;
	cout << "Pole prostokata 1: " << prostokat1.Pole() << endl;

	// wykorzystanie operatora wypisania
	cout << prostokat1 << endl;

	// -----------------------------------------------------------

	// obiekt klasy Prostokat zdefiniowany poprzez wskaŸnik
	
	// wykorzystanie przeci¹¿enia konstruktora
	Prostokat* prostokat2 = new Prostokat(3, 5);

	prostokat2->GetA();
	prostokat2->GetB();

	// wykorzystanie overrideowanych metod
	cout << "Obwod prostokata 2: " << prostokat2->Obwod() << endl;
	cout << "Pole prostokata 2: " << prostokat2->Pole() << endl;

	// wykorzystanie operatora wypisania
	cout << prostokat2 << endl;

	// -----------------------------------------------------------

	// obiekt klasy Trojkat zdefiniowany poprzez zmienn¹ lokaln¹

	Trojkat trojkat1;
	Trojkat* trojkat1_ptr = &trojkat1;

	trojkat1.SetA(3);
	trojkat1.SetB(4);
	trojkat1.SetC(5);

	trojkat1.GetA();
	trojkat1.GetB();
	trojkat1.GetC();

	// wykorzystanie overrideowanych metod
	cout << "Obwod trojkata 1: " << trojkat1.Obwod() << endl;
	cout << "Pole trojkata 1: " << trojkat1.Pole() << endl;

	// wykorzystanie operatora wypisania
	cout << trojkat1 << endl;

	// -----------------------------------------------------------

	// obiekt klasy Trojkat zdefiniowany poprzez wskaŸnik

	// wykorzystanie przeci¹¿enia konstruktora
	Trojkat* trojkat2 = new Trojkat(3, 6, 9);

	trojkat2->GetA();
	trojkat2->GetB();
	trojkat2->GetC();

	// wykorzystanie overrideowanych metod
	cout << "Obwod trojkata 2: " << trojkat2->Obwod() << endl;
	cout << "Pole trojkata 2: " << trojkat2->Pole() << endl;

	// wykorzystanie operatora wypisania
	cout << trojkat2 << endl;

	// -----------------------------------------------------------

	// obiekt klasy Kolo zdefiniowany poprzez zmienn¹ lokaln¹

	Kolo kolo1;
	Kolo* kolo1_ptr = &kolo1;

	kolo1.SetR(7);

	kolo1.GetR();

	// wykorzystanie overrideowanych metod
	cout << "Obwod kola 1: " << kolo1.Obwod() << endl;
	cout << "Pole kola 1: " << kolo1.Pole() << endl;

	// wykorzystanie operatora wypisania
	cout << kolo1 << endl;

	// -----------------------------------------------------------

	// obiekt klasy Kolo zdefiniowany poprzez wskaŸnik

	// wykorzystanie przeci¹¿enia konstruktora
	Kolo* kolo2 = new Kolo(8);

	kolo2->GetR();

	// wykorzystanie overrideowanych metod
	cout << "Obwod kola 2: " << kolo2->Obwod() << endl;
	cout << "Pole kola 2: " << kolo2->Pole() << endl;

	// wykorzystanie operatora wypisania
	cout << kolo2 << endl;

	// -----------------------------------------------------------

	// Dowód na dzia³aj¹cy polimofizm

	FiguraPlaska* figury[ROZMIAR];

	figury[0] = prostokat1_ptr;
	figury[1] = prostokat2;
	figury[2] = trojkat1_ptr;
	figury[3] = trojkat2;
	figury[4] = kolo1_ptr;
	figury[5] = kolo2;

	for (int i = 0; i < ROZMIAR; i++) {
		cout << "Obwod figury " << i << ": " << figury[i]->Obwod() << endl;
	}

	// Destrukcja obiektów

	for (int i = 0; i < ROZMIAR; i++) {
		delete figury[i];
	}

	return 0;
}

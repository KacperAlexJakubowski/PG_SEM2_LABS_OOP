// OOP Lab 2 - Zadanie 1 (Book) + Zadanie 2 (Library)
#include <iostream>
#include <string>
#include "Book.hpp"
#include "Library.hpp"

using std::cout;
using std::endl;
using std::string;

int main() {
    cout << "========================================" << endl;
    cout << "         ZADANIE 1 - Klasa Book         " << endl;
    cout << "========================================" << endl;
    {
        string a = "Henryk Sienkiewicz", t = "Quo Vadis";

        Book e;
        cout << "e: " << e << endl;

        Book b1 = {a, t};
        cout << "b1: " << b1 << endl;

        Book b2 = {"Adam Mickiewicz", "Pan Tadeusz"};
        cout << "b2: " << b2 << endl;

        Book b3 = b1;
        cout << "b3: " << b3 << " b1: " << b1 << endl;

        e = std::move(b2);
        cout << "e: " << e << " b2:" << b2 << endl;

        e.SetAuthor("Boleslaw Prus");
        cout << "e: " << e << endl;

        e.SetTitle("Lalka");
        cout << "e: " << e << endl;
    }

    cout << endl;
    cout << "========================================" << endl;
    cout << "     ZADANIE 2 - Klasa Library          " << endl;
    cout << "========================================" << endl;
    {
        Library e;
        cout << "e: " << e << endl;

        // 3 ksiazki
        Library l1 = {{"Henryk Sienkiewicz", "Quo Vadis"},
                      {"Adam Mickiewicz", "Pan Tadeusz"},
                      {"Boleslaw Prus", "Lalka"}};
        cout << "l1: " << l1 << endl;

        Library l2(2);
        cout << "l2: " << l2 << endl;

        l2[0] = {"Stanislaw Lem", "Solaris"};
        l2[1] = {"Olga Tokarczuk", "Bieguni"};
        cout << "l2: " << l2 << endl;

        e = std::move(l2);
        cout << "e: " << e << " l2: " << l2 << endl;

        l1[0] = std::move(e[1]);
        cout << "l1: " << l1 << " e: " << e << endl;
    }

    return 0;
}
